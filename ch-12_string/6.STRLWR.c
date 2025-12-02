#include <stdio.h>
#include <ctype.h>


int main(){
    
    char alphabet[] = "ABCDE";

    char lowerCase[sizeof(alphabet)];

    int i;

    for(i=0;alphabet[i]!='\0';i++){
        lowerCase[i] = tolower(alphabet[i]);
    }

    lowerCase[i] = '\0';

    printf("lowerCase :%s",lowerCase);

    return 0;
}