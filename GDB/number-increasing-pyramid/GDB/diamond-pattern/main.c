/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,n,k,l,m;
    for(i=1;i<=5;i++){
        for(j=i;j<=5;j++){
            printf(" ");
        }
        for(n=1;n<=i;n++){
            printf(" *");
        }
        printf("\n");
    }
    
    for(k=2;k<=5;k++){
        for(l=1;l<=k;l++){
            printf(" ");
        }
        for(m=5;m>=k;m--){
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}
