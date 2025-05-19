/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int rows = 5, i, j, k;

    for (i=rows;i>=1;i--){
        for (j=1;j<i;j++){
            printf(" ");
        } 
        for (k=i;k<=rows;k++) {
            if (i==1 || k==i || k==rows)
                 printf("* ");
            else
                   printf("  ");
        }
        printf("\n");
    }
    return 0;
}