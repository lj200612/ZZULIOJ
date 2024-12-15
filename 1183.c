#include <stdio.h>
#include <stdlib.h>

struct p {
    int x;
    int y;
};


int compare_asc(const void *a, const void *b) {
    struct p *p1 = (struct p *)a;
    struct p *p2 = (struct p *)b;
    if (p1->x != p2->x) {
        return p1->x - p2->x; 
    } else {
        return p1->y - p2->y; 
    }
}


int compare_desc(const void *a, const void *b) {
    struct p *p1 = (struct p *)a;
    struct p *p2 = (struct p *)b;
    if (p1->x != p2->x) {
        return p2->x - p1->x; 
    } else {
        return p2->y - p1->y; 
    }
}

int main() {
    int n;
    scanf("%d", &n);
    struct p points[n];

    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &points[i].x, &points[i].y);
    }

   
    qsort(points, n, sizeof(struct p), compare_asc);

    
    for (int i = 0; i < n; i++) {
        printf("(%d,%d)", points[i].x, points[i].y);
        if (i < n - 1) printf(" ");
    }
    printf("\n");

    
    qsort(points, n, sizeof(struct p), compare_desc);

    
    for (int i = 0; i < n; i++) {
        printf("(%d,%d)", points[i].x, points[i].y);
        if (i < n - 1) printf(" ");
    }
    printf("\n");

    return 0;
}
