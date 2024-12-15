#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50
#define MAX_MAJOR_LENGTH 50

struct Student {
    int id;
    char name[MAX_NAME_LENGTH];
    int age;
    char major[MAX_MAJOR_LENGTH];
    float score;
};

// 自动保存学生信息到文件
void autoSaveToFile(struct Student students[], int count, const char *filename) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        printf("无法打开文件进行写入。\n");
        return;
    }
    fwrite(&count, sizeof(int), 1, file);
    fwrite(students, sizeof(struct Student), count, file);
    fclose(file);
}

// 自动从文件中加载学生信息
void autoLoadFromFile(struct Student students[], int *count, const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        printf("无法读取文件或文件不存在，新建空文件。\n");
        *count = 0;
        return;
    }
    fread(count, sizeof(int), 1, file);
    fread(students, sizeof(struct Student), *count, file);
    fclose(file);
    printf("学生信息已从文件加载。\n");
}

// 添加学生
void addStudent(struct Student students[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("学生数量已达上限，无法添加新学生。\n");
        return;
    }
    printf("请输入学生ID: ");
    scanf("%d", &students[*count].id);
    printf("请输入学生姓名: ");
    scanf("%s", students[*count].name);
    printf("请输入学生年龄: ");
    scanf("%d", &students[*count].age);
    printf("请输入学生专业: ");
    scanf("%s", students[*count].major);
    printf("请输入学生成绩: ");
    scanf("%f", &students[*count].score);
    (*count)++;
    printf("学生信息已添加。\n");
}

// 显示所有学生
void displayStudents(struct Student students[], int count) {
    if (count == 0) {
        printf("没有学生记录。\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        printf("学生ID: %d, 姓名: %s, 年龄: %d, 专业: %s, 成绩: %.2f\n", 
               students[i].id, students[i].name, students[i].age, students[i].major, students[i].score);
    }
}

// 查找学生
void searchStudent(struct Student students[], int count) {
    if (count == 0) {
        printf("没有学生记录。\n");
        return;
    }
    int searchId;
    printf("请输入要查找的学生ID: ");
    scanf("%d", &searchId);
    for (int i = 0; i < count; i++) {
        if (students[i].id == searchId) {
            printf("找到学生 - ID: %d, 姓名: %s, 年龄: %d, 专业: %s, 成绩: %.2f\n", 
                   students[i].id, students[i].name, students[i].age, students[i].major, students[i].score);
            return;
        }
    }
    printf("未找到学生ID为%d的记录。\n", searchId);
}

// 更新学生信息
void updateStudent(struct Student students[], int count) {
    if (count == 0) {
        printf("没有学生记录可供更新。\n");
        return;
    }
    int updateId;
    printf("请输入要更新的学生ID: ");
    scanf("%d", &updateId);
    for (int i = 0; i < count; i++) {
        if (students[i].id == updateId) {
            printf("请输入新的姓名: ");
            scanf("%s", students[i].name);
            printf("请输入新的年龄: ");
            scanf("%d", &students[i].age);
            printf("请输入新的专业: ");
            scanf("%s", students[i].major);
            printf("请输入新的成绩: ");
            scanf("%f", &students[i].score);
            printf("学生信息已更新。\n");
            return;
        }
    }
    printf("未找到学生ID为%d的记录。\n", updateId);
}

// 删除学生
void deleteStudent(struct Student students[], int *count) {
    if (*count == 0) {
        printf("没有学生记录可供删除。\n");
        return;
    }
    int deleteId;
    printf("请输入要删除的学生ID: ");
    scanf("%d", &deleteId);
    for (int i = 0; i < *count; i++) {
        if (students[i].id == deleteId) {
            for (int j = i; j < *count - 1; j++) {
                students[j] = students[j + 1];
            }
            (*count)--;
            printf("学生记录已删除。\n");
            return;
        }
    }
    printf("未找到学生ID为%d的记录。\n", deleteId);
}

int main() {
    system("chcp 65001");  // 显示utf-8
    struct Student students[MAX_STUDENTS];
    int count = 0;
    char filename[] = "students.dat";

    // 程序启动时自动加载文件
    autoLoadFromFile(students, &count, filename);

    int choice;
    do {
        printf("\n学生档案管理系统:\n");
        printf("1. 增加学生\n");
        printf("2. 显示学生\n");
        printf("5. 查找学生\n");
        printf("6. 更新学生信息\n");
        printf("7. 删除学生\n");
        printf("0. 退出\n");
        printf("请选择操作: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(students, &count); break;
            case 2: displayStudents(students, count); break;
            case 5: searchStudent(students, count); break;
            case 6: updateStudent(students, count); break;
            case 7: deleteStudent(students, &count); break;
            case 0: break;
            default: printf("无效的选择，请重新选择。\n");
        }
        
        // 操作后自动保存
        autoSaveToFile(students, count, filename);
    } while(choice != 0);

    return 0;
}