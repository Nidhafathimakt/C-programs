/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int fact,i,num;
    
    printf("Enter a number:");
    scanf("%d",&fact);
    
    for(i=1;i<=fact;i++){
        fact=fact*i;

    }
        printf("%d",fact);
    return 0;
}
