#include <stdio.h>


int main(){

    int num[5] = {99,88,77,66,55};

    printf("Enter you fourth element of array:");
    scanf("%d", &num[3]);
 
     for(int i = 0; i <= 4; i++){
        printf("%d\n",num[i]);
    }


    return 0;

}