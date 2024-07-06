#include<stdio.h>
int main() {
 int age;
 printf("Enter Your Age : ");
 scanf("%d" , &age);

 if(age > 18){
    printf("Adult \n");
    printf("You can drive Porsche\n");
 }
 else {
    printf("Not Adult\n");
    printf("Show Kindness , do not drive car\n");
 }
return 0;
} 