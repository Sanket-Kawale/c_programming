#include<stdio.h>

int fact(int n);

int main(){
    printf("Factorial is : %d", fact(10));
    return 0;
}

int fact(int n){
    if (n == 0) {
        return 1;
    }
    int factNm1 = fact(n-1);
    int factN = factNm1 * n;
    return factN;

}















//5! = 1*2*3*4*5 or 4!*5 