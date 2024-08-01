#include<stdio.h>
int main(){
int age;
printf("Enter Your Age :");
scanf("%d" ,  &age);

if(age < 12)
{
    printf("Child");

}
else if( age>12 && age<18 ){
    printf("Teeanager");
}

else if(age >= 18){
    printf("Adult");
}
    return 0;
}
