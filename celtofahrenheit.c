#include<stdio.h>

 float convTemp(float celsius);

 int main(){
   float fah = convTemp(37);
    printf("Conversion of Celsius to fahrenheit is : %f", fah);

    return 0;
 }

 float convTemp(float celsius){
 float fah = celsius * (9.0/5.0) + 32;
 return fah;

 }
