#include<math.h>
#include<stdio.h>

float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float l , float b);

int main()  {
    float l = 5.0;
    float b = 10.0;

    printf("Area is : %f", rectangleArea(l, b));

    return 0;
}

float squareArea(float side) {
return side * side ; 
}

float circleArea(float radius) {
return 3.14 * radius * radius ;
}

float rectangleArea(float l , float b) {
return l * b ;
}
