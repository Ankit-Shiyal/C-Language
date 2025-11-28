#include <stdio.h>

int main(){

    int num[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    printf("%d\n", num[2][2]);

    printf("%d\n", num[0][2]);

    printf("%d\n", num[2][0]);

    printf("%d\n", num[1][1]);

    return 0;
}