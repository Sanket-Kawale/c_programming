#include<stdio.h>

void printSK(int count);

int main(){
    printSK(10);
    return 0;
}

//recursive function
void printSK(int count){
 if(count == 0) {
    return;
 }

 printf("Sanket Kawale \n");
 printSK(count-1);
    
}
