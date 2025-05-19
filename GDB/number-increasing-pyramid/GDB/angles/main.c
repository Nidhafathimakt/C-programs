/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     int a1,a2,a3,sum;
    printf("Enter the first angle:");
    scanf("%d",&a1);
    printf("Enter the second angle:");
    scanf("%d",&a2);
    printf("Enter the third angle:");
    scanf("%d",&a3);
    
    sum=a1+a2+a3;
    
    if(sum==180){
        printf("Triangle can be formed with the given angles");
    }else{
        printf("Triangle cannot be formed with the given angles");
    }

    return 0;
}
