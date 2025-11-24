#include <stdio.h>

int main(){

    int num=5;

    for(int i=5;i>=1;i--){

    for(int j=1;j<=num-i;j++){
            printf(" ");
        }
    for (int k=i;k>=1;k--){
       if (k%2!=0){
        printf("1");
       }

       else
       printf("0");
       
    }
    printf("\n");

    }


    return 0;
}