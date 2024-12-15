#include <stdio.h>
#include <stdlib.h>
 
struct p {
    int x;
    int y;
};
 
// 比较函数（升序排序：先按横坐标，横坐标相同按纵坐标）
int compare_asc(const void *a, const void *b) {
    struct p *p1 = (struct p *)a;
    struct p *p2 = (struct p *)b;
    if (p1->x != p2->x) {
        return p1->x - p2->x; // 按横坐标排序
    } else {
        return p1->y - p2->y; // 横坐标相同，按纵坐标排序
    }
}
 
// 比较函数（降序排序：先按横坐标，横坐标相同按纵坐标）
int compare_desc(const void *a, const void *b) {
    struct p *p1 = (struct p *)a;
    struct p *p2 = (struct p *)b;
    if (p1->x != p2->x) {
        return p2->x - p1->x; // 按横坐标降序排序
    } else {
        return p2->y - p1->y; // 横坐标相同，按纵坐标降序排序
    }
}
 
int main() {
    int n;
    scanf("%d", &n);
    struct p points[n];
 
    // 输入坐标
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &points[i].x, &points[i].y);
    }
 
    // 升序排序
    qsort(points, n, sizeof(struct p), compare_asc);
 
    // 输出升序结果
    for (int i = 0; i < n; i++) {
        printf("(%d,%d)", points[i].x, points[i].y);
        if (i < n - 1) printf(" ");
    }
    printf("\n");
 
    // 降序排序
    qsort(points, n, sizeof(struct p), compare_desc);
 
    // 输出降序结果
    for (int i = 0; i < n; i++) {
        printf("(%d,%d)", points[i].x, points[i].y);
        if (i < n - 1) printf(" ");
    }
    printf("\n");
 
    return 0;
}