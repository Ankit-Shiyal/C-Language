#include <stdio.h>

int addition(){
    return  50+10;
}

int square(){
    int value=5;
    return value*value;
}

int main(){

    int result1 = addition();
    printf("result1 %d\n",result1);

    int squareOfFive = square();
    printf("square of five %d\n",squareOfFive);

    return 0;
}