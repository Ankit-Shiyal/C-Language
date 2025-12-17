#include <stdio.h>

int main()
{
    char str[100], rev[100];
    int i, j, len = 0;

    printf("Enter any string:\n");
    scanf("%s", str);  

    for (i = 0; str[i] != '\0'; i++) {
        len++;
    }

   
    j = len - 1;
    for (i = 0; i < len; i++) {
        rev[i] = str[j];
        j--;
    }
    rev[i] = '\0';

    int palindrome = 1;
    for (i = 0; i < len; i++) {
        if (str[i] != rev[i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1) {
        printf("Output: The given string is a palindrome.");
    } else {
        printf("Output: The given string is not a palindrome.");
    }

    return 0;
}
