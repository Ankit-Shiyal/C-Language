 #include <stdio.h>

 int main(){


     int num=20;

     for(int i=0;i<num;i++){

         if(i%2!=0){
             continue;
         }
        printf("%d\n",i);

     }


     return 0;
 }

