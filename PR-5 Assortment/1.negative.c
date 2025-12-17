
#include <stdio.h>


int main(){

    int a;

printf("enter size of array:");
scanf("%d",&a);

int arr[a];

printf("Enter array's elements:%d\n",a);

for(int i=0;i<a;i++){
    printf("enter elements:");
    scanf("%d",&arr[i]);
}

 printf("nagative elements:\n");

for(int i=0;i<a;i++){

    if(arr[i] < 0){
        printf("%d",arr[i]);
    }
}
return 0;

}
