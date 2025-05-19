/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,l,m,n;
    for(i=1;i<5;i++){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(k=i;k<5;k++){
            printf(" %d",k);
        }
        printf("\n");
    }

    for(l=4-1;l>=1;l--){
        for(n=1;n<l;n++){
            printf(" ");
        }
        for(m=l;m<5;m++){
            printf(" %d",m);
            
        }
        printf("\n");
    }

    
    return 0;
}
