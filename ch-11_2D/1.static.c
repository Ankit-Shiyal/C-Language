#include <stdio.h>

int main(){

    int num[3][3] = {};

    num[0][0]=1;
    num[0][1]=2;
    num[0][2]=3;
    num[1][0]=4;
    num[1][1]=5;
    num[1][2]=6;
    num[2][0]=7;
    num[2][1]=8;
    num[2][2]=9;

    printf("%d\n",num[1][1]);

     printf("%d\n",num[1][2]);

      printf("%d\n",num[2][1]);


    return 0;
}