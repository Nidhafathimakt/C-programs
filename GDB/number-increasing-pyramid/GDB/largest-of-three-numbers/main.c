/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1=6,num2=4,num3=0;
    if(num1>num2 && num1>num3){
    printf("num1 is greater ");
    }else if(num2>num3){
        printf("num2 is greater");
    }else{
        printf("num3 is greater");
    }

    return 0;
}
