#include<stdio.h>

int sum (int a,int b);
 
 int main(){
    int a,b;

    printf("Enter First No : \n");
    scanf("%d", &a);
    printf("Enter Second No : \n");
    scanf("%d", &b);
     
    int s = sum (a, b);
    printf("Sum Is : %d\n" , s);

 return 0;
 }

 int sum (int x,int y){
 return x + y;
}