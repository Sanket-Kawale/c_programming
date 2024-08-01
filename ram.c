#include<stdio.h>

void RamRam();
void Assalamwalekum();

int main(){
    printf("Enter Your Nationality I for indian and P for Pakistani : ");
    char ch;
    scanf("%c", &ch);

    if(ch == 'i'){
        RamRam();
    }
    else if(ch == 'p') {
        Assalamwalekum();
    }
    else{
        printf("Invalid");
    }

     return 0;
}


void RamRam(){
        printf("Ram Ram !! \n");
     }

void Assalamwalekum(){
printf("Assalamwalekum \n");
}


     