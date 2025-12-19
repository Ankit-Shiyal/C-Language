#include <stdio.h>

void cubeArray(int (*p)[5], int n){
    int i, j;

    printf("Cubes:\n");
    for (i = 0; i < n; i++){

        for (j = 0; j < n; j++){
            printf("%d ", p[i][j] * p[i][j] * p[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[5][5], n, i, j;

    printf("Enter your array size:");
    scanf("%d", &n);

    printf("Enter your array elements:\n");
    for (i = 0; i < n; i++){

        for (j = 0; j < n; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    cubeArray(a, n);

    return 0;
}