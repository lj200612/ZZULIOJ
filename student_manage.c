#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define N 10000  // Maximum number of students
#define ID_LENGTH 12

typedef struct student {
    char ID[ID_LENGTH + 1];  
    char name[20];           
    char sex;                
    double score[5];         
    double total;            
    double avg;              
} STU;

// Function to validate ID
int isValidID(char *id) {
    if (strlen(id) != ID_LENGTH) return 0;
    for (int i = 0; i < ID_LENGTH; i++) {
        if (!isdigit(id[i])) return 0;
    }
    return 1;
}

void display(void);
void load(STU stu[], int *nPtr);
void save(STU stu[], int n);
void sort(STU stu[], int n);
void add(STU stu[], int *nPtr);
void del(STU stu[], int *nPtr);
void edit(STU stu[], int n);
void DeleteAll(STU stu[], int *nPtr);
int FindByNum(STU stu[], int n, char *str);
void output(STU stu[], int n);
void PrintRecord(STU *sPtr);

int main() {
    system("chcp 65001");  // Set console to UTF-8 for Windows
    STU stu[N];  
    int n = 0;   
    int choice;

    while (1) {
        display();
        printf("请选择功能(0退出): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: load(stu, &n); break;
            case 2: add(stu, &n); save(stu, n); break;  // Save after adding
            case 3: del(stu, &n); save(stu, n); break;  // Save after deletion
            case 4: DeleteAll(stu, &n); save(stu, n); break;  // Save after deleting all
            case 5: edit(stu, n); save(stu, n); break;  // Save after editing
            case 6: {
                char num[ID_LENGTH + 1];
                printf("输入要查找的学号: ");
                scanf("%s", num);
                int index = FindByNum(stu, n, num);
                if (index != -1) {
                    PrintRecord(&stu[index]);
                } else {
                    printf("未找到该学号的记录!\n");
                }
                break;
            }
            case 7: sort(stu, n); break;
            case 8: output(stu, n); break;
            case 9: save(stu, n); break;
            case 0: printf("系统已退出。\n"); exit(0);
            default: printf("无效选择，请重新输入!\n");
        }
    }
    return 0;
}

void display(void) {
    printf("\n====== 学生信息管理系统 ======\n");
    printf("1. 从文件加载数据\n");
    printf("2. 添加学生记录\n");
    printf("3. 删除单个学生记录\n");
    printf("4. 删除所有学生记录\n");
    printf("5. 修改学生记录\n");
    printf("6. 查找学生记录\n");
    printf("7. 按总分降序排序\n");
    printf("8. 显示所有学生记录\n");
    printf("9. 保存数据到文件\n");
    printf("0. 退出系统\n");
    printf("=================================\n");
}

void load(STU stu[], int *nPtr) {
    FILE *fp = fopen("student.txt", "rb");  // Open in binary mode
    if (!fp) {
        printf("文件不存在或无法打开!\n");
        return;
    }
    *nPtr = fread(stu, sizeof(STU), N, fp);
    fclose(fp);
    printf("数据已加载，共有%d条记录。\n", *nPtr);
}

void save(STU stu[], int n) {
    FILE *fp = fopen("student.txt", "wb");  // Write in binary mode
    if (!fp) {
        printf("无法保存数据!\n");
        return;
    }
    fwrite(stu, sizeof(STU), n, fp);
    fclose(fp);
    printf("数据已保存，共有%d条记录。\n", n);
}

void add(STU stu[], int *nPtr) {
    STU temp;
    char id[ID_LENGTH + 1];

    printf("输入学号(%d位纯数字): ", ID_LENGTH);
    scanf("%s", id);

    if (!isValidID(id)) {
        printf("学号必须是%d位纯数字!\n", ID_LENGTH);
        return;
    }

    strcpy(temp.ID, id);

    if (FindByNum(stu, *nPtr, temp.ID) != -1) {
        printf("学号已存在，无法重复添加!\n");
        return;
    }

    printf("输入姓名: ");
    scanf("%s", temp.name);
    
    do {
        printf("输入性别(M/F): ");
        scanf(" %c", &temp.sex);
        if (temp.sex != 'M' && temp.sex != 'F') {
            printf("性别只能是M或F!\n");
        }
    } while (temp.sex != 'M' && temp.sex != 'F');

    printf("输入五门课成绩: ");
    temp.total = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &temp.score[i]);
        temp.total += temp.score[i];
    }
    temp.avg = temp.total / 5.0;

    stu[(*nPtr)++] = temp;
    printf("记录已添加!\n");
}

void del(STU stu[], int *nPtr) {
    char num[ID_LENGTH + 1];
    printf("输入要删除的学号: ");
    scanf("%s", num);
    int index = FindByNum(stu, *nPtr, num);

    if (index == -1) {
        printf("未找到该学号的记录!\n");
        return;
    }

    for (int i = index; i < *nPtr - 1; i++) {
        stu[i] = stu[i + 1];
    }
    (*nPtr)--;
    printf("记录已删除!\n");
}

void DeleteAll(STU stu[], int *nPtr) {
    *nPtr = 0;
    printf("所有记录已删除!\n");
}

void edit(STU stu[], int n) {
    char num[ID_LENGTH + 1];
    printf("输入要修改的学号: ");
    scanf("%s", num);
    int index = FindByNum(stu, n, num);

    if (index == -1) {
        printf("未找到该学号的记录!\n");
        return;
    }

    printf("输入新姓名: ");
    scanf("%s", stu[index].name);
    
    do {
        printf("输入新性别(M/F): ");
        scanf(" %c", &stu[index].sex);
        if (stu[index].sex != 'M' && stu[index].sex != 'F') {
            printf("性别只能是M或F!\n");
        }
    } while (stu[index].sex != 'M' && stu[index].sex != 'F');

    printf("输入五门新成绩: ");
    stu[index].total = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &stu[index].score[i]);
        stu[index].total += stu[index].score[i];
    }
    stu[index].avg = stu[index].total / 5.0;
    printf("记录已修改!\n");
}

int FindByNum(STU stu[], int n, char *str) {
    for (int i = 0; i < n; i++) {
        if (strcmp(stu[i].ID, str) == 0) {
            return i;
        }
    }
    return -1;
}

void PrintRecord(STU *sPtr) {
    printf("学号:%s 姓名:%s 性别:%c 总分:%.2lf 平均分:%.2lf\n", sPtr->ID, sPtr->name, sPtr->sex, sPtr->total, sPtr->avg);
}

void output(STU stu[], int n) {
    if (n == 0) {
        printf("当前没有记录!\n");
        return;
    }
    printf("%-20s %-20s %-10s %-10s %-10s\n", "学号", "姓名", "性别", "总分", "平均分");
    for (int i = 0; i < n; i++) {
        printf("%-20s %-20s %-10c %-10.2lf %-10.2lf\n", stu[i].ID, stu[i].name, stu[i].sex, stu[i].total, stu[i].avg);
    }
}

void sort(STU stu[], int n) {
    STU temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (stu[i].total < stu[j].total) {
                temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }
        }
    }
    printf("记录已按总分降序排序!\n");
}