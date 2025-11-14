

#include <stdio.h>


int main(){


    float grossSalary,baseSalary,hraPercentage,daPercentage,taPercentage;

    baseSalary=100;

    float hraPercent = 10;
    float daPercent = 5;
    float taPercent = 8;

    hraPercentage = (baseSalary*hraPercent)/100;

    daPercentage = (baseSalary*daPercent)/100;

    taPercentage=(baseSalary*taPercent)/100;

    grossSalary = baseSalary + hraPercentage + daPercentage + taPercentage;
    printf("Gross salary: %.1f",grossSalary);

    return 0;



}