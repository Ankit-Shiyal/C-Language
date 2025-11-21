#include <stdio.h>

int main() {

    int num = 5;

    for (int i=num; i>=1; i--) {
        for (int j=1; j<=i; j++) {

            if (j%2!=0)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }

    return 0;
}
