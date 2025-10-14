    #include <stdio.h>
        int main(){

            float firstAngle, secondAngle, thridAngle;

             printf("enter firstAngle:");
             scanf("%f",&firstAngle);

             printf("\nenter secondAngle:");
             scanf("%f",&secondAngle);

             thridAngle= 180 - (firstAngle + secondAngle);

             printf("\nthridAngle is : %.2f",thridAngle);

            return 0;
        }



        // #include <stdio.h>

//     int main() {

//         float firstAngle, secondAngle, thridAngle;

//         firstAngle=65;
//         secondAngle=45;

//         thridAngle= 180 - (firstAngle + secondAngle);

//         printf("thridAngle is : %f",thridAngle);


//         return0;
//     }