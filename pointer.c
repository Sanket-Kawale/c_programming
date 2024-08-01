#include<stdio.h>

int main(){

    int age = 18;
    int *ptr = &age;
    int _age = *ptr;

    printf("%d",_age);
    return 0;
}

//declaring pointers
// int*ptr; char*ptr; float*ptr;