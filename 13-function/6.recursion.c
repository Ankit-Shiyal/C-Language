#include <stdio.h>

int sum(int n){

    if(n==0){
        return 0;
    }else {
        return n + sum(n-1);
    }


}

int main(){


    int result1 = sum(10);
    printf("%d\n",result1);

     int result2 = sum(20);
    printf("%d\n",result2);



    return 0;
}