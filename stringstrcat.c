#include<stdio.h>
#include<string.h>

void printString(char arr[]);
int countLenght(char arr[]);

int main() {
    char firstStr[100] = "SANKET";   //mention size 100 or something
    char secStr[100] = "KAWALE";
    strcat(firstStr, secStr);
    puts(firstStr);

}