#include <stdio.h>

    int main(){

        int A ,B , addition, substraction, multiplication, division, modulo  ;

        // addition
        printf("Enter your number A = ");
        scanf("%d", &A);

        printf("Enter your number B = ");
        scanf("%d", &B);

        addition = A + B;
        printf("addition :%d\n", addition);

        // substraction

        printf("\nEnter your number A = ");
        scanf("%d", &A);

        printf("Enter your number B = ");
        scanf("%d", &B);

        substraction = A - B;
        printf("substraction :%d\n", substraction);

        // multiplication
        printf("\nEnter your number A = ");
        scanf("%d", &A);

        printf("Enter your number B = ");
        scanf("%d", &B);

        multiplication = A * B;
        printf("multiplication :%d\n", multiplication);

        // division
        printf("\nEnter your number A = ");
        scanf("%d", &A);

        printf("Enter your number B = ");
        scanf("%d", &B);

        division = A / B;
        printf("division :%d\n", division);


        // modulo
        printf("\nEnter your number A = ");
        scanf("%d", &A);

        printf("Enter your number B = ");
        scanf("%d", &B);

        modulo = A % B;
        printf("modulo :%d\n", modulo);
        
        return 0;
    }


