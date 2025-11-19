
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





// #include <stdio.h>

// int main(){

//     int Modulo, A, B, Addition, Substraction, Multiplication, Division;

//     char operator;

//     printf("Enter number A\n");
//     scanf("%d",&A);

//     printf("Enter number B\n");
//     scanf("%d",&B);
// 4
//     printf("Enter your operator (+, -, *, /, %%)\n");
//     scanf(" %c",&operator);   

//     if(operator == '+'){      
//         printf("Result = %d\n", A + B);
//     }

//     else if(operator == '-'){
//         printf("Result = %d\n", A - B);
//     }

//     else if(operator == '*'){
//         printf("Result = %d\n", A * B);
//     }

//     else if(operator == '/'){
//         printf("Result = %d\n", A / B);
//     }

//     else if(operator == '%'){
//         printf("Result = %d\n", A % B);
//     }
 
//     else {
//         printf(" Invalid operator\n");
//     }
    
//     return 0;
// }