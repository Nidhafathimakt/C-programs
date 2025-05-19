/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int temp;
    printf("Enter the temperature:");
    scanf("%d",&temp);
    
    if(temp<0){
        printf("Freezing weather");
    }else if(temp>0&&temp<10){
        printf("Very cold weather");
    }else if(temp>=10&&temp<20){
        printf("Cold weather");
    }else if(temp>=20&&temp<30){
        printf("Normal in temperature");
    }else if(temp>=30&&temp<40){
        printf("Its hot");
    }else{
        printf("Its very hot");
    }

    return 0;
}