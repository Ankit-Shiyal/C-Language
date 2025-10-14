#include <stdio.h>

int main(){

    float basicSalary, grossSalary, DA, TA, HRA;
    float daAmount, taAmount, hraAmount;

    printf("enter basic salary:");
    scanf("\n%f",&basicSalary);
    printf("enter DA:");
    scanf("\n%f",&DA);
    printf("enter TA:");
    scanf("\n%f",&TA);
    printf("enter HRA:");
    scanf("\n%f",&HRA);

    daAmount = (basicSalary*DA)/100;
    taAmount = (basicSalary*TA)/100;
    hraAmount = (basicSalary*HRA)/100;

    grossSalary = basicSalary + daAmount + taAmount +hraAmount;
    printf("\nGross Salary:%.2f",grossSalary);

    return 0;

}