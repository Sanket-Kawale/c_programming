#include<stdio.h>
#include<math.h>


int main() {
int marks;
printf("Enter Your Marks");
scanf("%d",marks);

if(marks > 35)
{
printf("Congratualations you are pass in your exam \n");
}
else
{
    printf("Better luck next time\n");
}
return 0;
}  