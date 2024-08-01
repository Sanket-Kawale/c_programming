#include<stdio.h>

int main() {
//every alphabet has it's internal "as-sky" value 
char ch;
printf("Enter Letter : ");
scanf("%c" , &ch);

if( ch >= 'A' && ch <= 'Z') {
    printf("Uppercase");
}

else if( ch >= 'a' && ch <= 'z') {
    printf("Lowercase");
}
else {
    printf("Not A English Letter");
}
return 0;
}  