#include<stdio.h>

void calculatePrice(float value);

int main(){

float value = 100.0;
calculatePrice(value);
printf("Value Is : %f\n ",value);
  return 0;
}

void calculatePrice(float value) {
value = value + (0.18 * value);
printf("Final Price Is : %f \n", value);

}