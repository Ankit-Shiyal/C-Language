#include <stdio.h>

void greetingMsg(char msg[]){

    printf("%s\n",msg);
}

void multiplication(int a,int b){

    printf("Multiplication Result %d\n",a*b);
}

int main(){
    greetingMsg("hello good Morning");

    multiplication(10,12);

    return 0;
}
