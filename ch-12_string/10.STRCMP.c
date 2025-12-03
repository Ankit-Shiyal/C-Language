#include <stdio.h>
#include <string.h>

int main(){

    char word1[] = "abcd";
    char word2[] = "efgh";
    char word3[sizeof(word1)];

    int result1  = strcmp(word1,word2);
    printf("result1 %d\n",result1);

    int result2 = strcmp(word2,word1);
    printf("result2 %d\n",result2);

    strcpy(word3,word1);

    int result3 = strcmp(word3,word1);

    printf("same result3: %d\n",result3);

    return 0;
}