#include<stdio.h>

int main() {

int marks[2][3];
marks[0][0] = 98;
marks[0][1] = 89;
marks[0][2] = 95;

marks[1][0] = 88;
marks[1][1] = 90;
marks[1][2] = 97;

printf("%d \n", marks[0][0]);
printf("%d \n", marks[0][1]);
printf("%d \n", marks[0][2]);

printf("%d \n", marks[1][0]);
printf("%d \n", marks[1][1]);
printf("%d \n", marks[1][2]);


    return 0;
}