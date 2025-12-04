#include <stdio.h>

int square(int a){

    return a*a;
}

int main(){

    int result1= square(8);
    printf("result1 :%d\n",result1);

    int result2= square(12);
    printf("result2 :%d\n",result2);

    int result3= square(4);
    printf("result3 :%d\n",result3);

    return 0;
}