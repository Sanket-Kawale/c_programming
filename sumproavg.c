#include<stdio.h>

void doWork(int a, int b, int *sum, int *pro, int *avg);

int main() {

    int a = 3, b = 5;
    
    int sum, pro, avg;
    doWork(a, b, &sum, &pro, &avg);

    printf("sum = %d, pro = %d, avg = %d", sum, pro, avg);

    return 0;
}

void doWork(int a, int b, int *sum, int *pro, int *avg) {
    *sum = a + b;
    *pro = a*b;
    *avg = (a+b)/2;


}