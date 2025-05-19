/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,l,row=5;
    for(i=1;i<=row;i++){
        for(j=i;j<=row;j++){
            printf(" *");
        }
        printf("\n");
    }
    for(k=2;k<=row;k++){
        for(l=1;l<=k;l++){
             printf(" *");
        }
        printf("\n");
       
    }
    

    return 0;
}
