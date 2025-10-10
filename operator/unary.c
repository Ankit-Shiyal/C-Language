#include <stdio.h>

int main(){

    int a = 25;

    // pre
    printf("pre increment:%d\n", ++a);

    printf("pre decrement:%d\n", --a); 

    // post
    printf("post increment:%d\n", a++);
    printf("value:%d\n", a);

    printf("post decrement;%d\n", a--);
    printf("value:%d\n", a);

    return 0;
}