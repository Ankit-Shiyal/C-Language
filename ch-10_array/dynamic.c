#include <stdio.h>

int main(){

    int num[5] = {};

    printf("Enter you first element of array:");
    scanf("%d", &num[0]);

    printf("Enter you second element of array:");
    scanf("%d", &num[1]);

    printf("Enter you third element of array:");
    scanf("%d", &num[2]);

    printf("Enter you fourth element of array:");
    scanf("%d", &num[3]);

    printf("Enter you fifth element of array:");
    scanf("%d", &num[4]);

    printf("fourth element of an array: %d",num[3]);

    return 0;
}