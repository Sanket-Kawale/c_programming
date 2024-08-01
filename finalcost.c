#include<stdio.h>

int main() {

//float cost[3];
float cost[] = {100, 200, 300};
//printf("Enter Three Prices : ");
//scanf("%f", &cost[0]);
//scanf("%f", &cost[1]);
//scanf("%f", &cost[2]);

printf("Final Cost 1 : %f\n", cost[0]+(cost[0]*0.18));
printf("Final Cost 2 : %f\n", cost[1]+(cost[1]*0.18));
printf("Final Cost 3 : %f\n", cost[2]+(cost[2]*0.18));


    return 0;
}

