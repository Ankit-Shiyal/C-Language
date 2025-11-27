#include <stdio.h>

int main(){

    int num[5] = {11,22,33,44,55};

    num[2]=66;



    for(int i = 0; i <= 4; i++){
        printf("%d\n",num[i]);
    }

    return 0;
}
