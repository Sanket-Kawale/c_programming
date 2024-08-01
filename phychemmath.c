#include<stdio.h>

int calPer(int phy, int chem, int math, int cs);

int main(){
    int phy = 81;
    int chem = 66;
    int math = 69;
    int cs = 87;

    printf("percentage is : %d", calPer(phy, chem, math, cs));


    return 0;
}

int calPer(int phy, int chem, int math, int cs){
return ((phy + chem + math + cs) / 4);

}

