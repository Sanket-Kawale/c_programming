#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float percentage;
    char name[100];
};
 
int main() {
struct student s1;
s1.roll = 2200340;
s1.percentage = 98;

strcpy(s1.name, "Sanket");

printf("Student Name = %s\n", s1.name);
printf("Student Roll no = %d\n", s1.roll);
printf("Student Percentage = %f\n", s1.percentage);

return 0;

}