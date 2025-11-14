
#include <stdio.h>

int main(){

    int Modulo, A, B, Addition, Substraction, Multiplication, Division;

    char operator;

    printf("Enter number A\n");
    scanf("%d",&A);

    printf("Enter number B\n");
    scanf("%d",&B);

    printf("Enter your operator (+, -, *, /, %%)\n");
    scanf(" %c",&operator);  

    switch(operator){

        case '+':
        printf("Result = %d\n", A + B);
        break;

        case '-':
        printf("Result = %d\n", A - B);
        break;

        case '*':
        printf("Result = %d\n", A * B);
        break;

        case '/':
        printf("Result = %d\n", A / B);
        break;

        case '%':
        printf("Result = %d\n", A % B);
        break;
    }

  return 0;
}

