#include <stdio.h>

int main() {
    int i, j, k, s = 16;

    for(i=1;i<=5;i++){

        for(j=1;j<=i;j++){
            printf("%d ", j);
        }

        for(k=1;k<=s;k++){
            printf(" ");
        }

        for(j=i;j>=1;j--){
            printf("%d ", j);
        }

        s -= 4;

        printf("\n");
    }

    return 0;
}