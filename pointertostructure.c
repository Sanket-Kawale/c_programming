#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float percentage;
    char name[100];
};
 
int main() {
struct student s1 = {2200340, 98, "Sanket"};
printf("Student roll = %d\n", s1.roll);

struct student *ptr = &s1;
printf("Student name with pointer = %s\n", (*ptr).name);

printf("Student->percentage = %f\n", ptr->percentage); //arrow pointer

return 0;

}