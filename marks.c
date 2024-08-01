#include<stdio.h>


int main(){
int marks;
printf("Enter Your Marks 0-100 : ");
scanf("%d", &marks);

if( marks >= 95 && marks <= 100 ){
    printf("A++ GRADE \n");
}
else if( marks >= 90 && marks < 95){
printf("A+ GRADE \n");
}
else if( marks >= 80 && marks <90){
   printf("B GRADE \n");
}
else if(marks >= 35 && marks < 80){
    printf("C GRADE \n");
}
else if( marks >= 0 && marks < 35){
    printf("Sorry You Are Fail");
}
else {
    printf("Invalid Result");
}
    return 0;
}