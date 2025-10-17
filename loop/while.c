#include <stdio.h>

    int main(){

        int sum = 0;

        int num = 1;

        while(num<=1000){
            sum+=num;
            num++;
        }
        printf("sum: %d\n",sum);

        return 0;
    }