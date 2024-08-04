#include<stdio.h>
#include<string.h>

void printString(char arr[]);
int countLenght(char arr[]);

int main() {
    char name[] = "SANKET";
    printf("Length Is : %d", strlen(name));

    return 0;
}

int countLenght(char arr[]) {
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++) {
        count++;
    }
return count-1;

}

void printString(char arr[]) {
    for(int i=0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}