
#include <stdio.h>
#include <string.h>

int main(){

    char greeting[] ="hello good morning";

    char copyString[sizeof(greeting)];

    strcpy(copyString,greeting);

    printf("copy string :%s",copyString);

    return 0;
}