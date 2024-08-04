#include<stdio.h>
#include<string.h>

void printString(char arr[]);
int countLenght(char arr[]);

int main() {
    char oldstr[] = "Mango";
    char newstr[] = "Banana";
    printf("%d", strcmp(oldstr, newstr));

}

//depends on as sky value of M and B
// here assky value of M > B therefore this is true and output is 1 for true