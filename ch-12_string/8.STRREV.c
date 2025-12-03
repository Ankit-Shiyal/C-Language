#include <stdio.h>
#include <string.h>

int main (){

    char alphabet[] ="abcdefg";

    char reverseAlphabet[sizeof(alphabet)];

    int length=strlen(alphabet);

    int i,j;
    for(i=length-1, j=0; i>=0; i--, j++){
        reverseAlphabet[j] = alphabet[i];
    }

    reverseAlphabet[j] = '\0';

    printf("reverse :%s",reverseAlphabet);

    return 0;
}