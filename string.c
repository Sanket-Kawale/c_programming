#include<stdio.h>

int main() {
char name[] = {'S', 'A', 'N', 'K', 'E', 'T', '\0'};
// or you can char name[] = "SANKET";

printf("Enter Any Letter Of Word Sanket : %s", name);
scanf("%s", &name);

    return 0;
}
