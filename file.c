#include<stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("test.txt", "r");

    fclose(fptr);
    return 0;


}

//FILE OPENING MODES : 
//r read
//rb open to read in binary
//w write
//wb open to write in binary
//a append