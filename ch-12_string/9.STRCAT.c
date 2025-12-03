
#include <stdio.h>
#include <string.h>

int main (){

    char greeting[] = "hello ";

    char word[]="good morning";


    strcat(greeting,word);


    printf("concat word :%s",greeting);

    return 0;

}