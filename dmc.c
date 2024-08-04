#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int)); 
//memory allocation taks no of bytes to allocate and returns ptr of
    
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    ptr = (float *) calloc(5, sizeof(float));
//continuos allocation initilizes with 0

    ptr = realloc(ptr, 4 );  
//reallocation used for increase or decrease memory

for( int i=0; i<5; i++) {
    printf("%d\n", ptr[i]);

    free(ptr);
//free is used to free memory of desired location

}
    return 0;
}