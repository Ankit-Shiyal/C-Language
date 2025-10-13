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

    if(operator == '+'){      
        printf("Result = %d\n", A + B);

    }
    else if(operator == '-'){
        printf("Result = %d\n", A - B);
    }

    else if(operator == '*'){
        printf("Result = %d\n", A * B);
    }

    else if(operator == '/'){
        printf("Result = %d\n", A / B);
    }

    else if(operator == '%'){
        printf("Result = %d\n", A % B);
    }
 
    else {
        printf(" Invalid operator\n");
    }
    return 0;
}
