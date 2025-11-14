

#include <stdio.h>


int main(){

    int angel1,angle2,angle3;

    printf("enter First angle\n:");
    scanf("%d",&angel1);

    
    printf("enter second angle\n:");
    scanf("%d",&angle2);

    
    angle3 = 180 - (angel1+angle2);

    printf("Third angel :%d\n",angle3);

    return 0;

    

}