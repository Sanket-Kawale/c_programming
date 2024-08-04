#include<stdio.h>

void printString(char arr[]);

int main() {

    printString;
    char fullName[100];
    scanf("%s", fullName);
    printf("Enter Your Full Name : %s", fullName);

    return 0;
}

void printString(char arr[]) {
    for(int i=0; arr[i] != '\0'; i++) {
    printf("%c", arr[i]);
}
printf("\n");
}