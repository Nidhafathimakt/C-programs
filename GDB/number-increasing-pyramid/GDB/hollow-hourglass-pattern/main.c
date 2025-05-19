/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,size=5;

    for(i=1;i<=size;i++){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(k=i;k<=size;k++){
            if(i==1 || k==i || k==size){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
    for(i=size-1;i>=1;i--){
        for(j=1;j<i;j++){
            printf(" ");
        } 
        for(k=i;k<=size;k++) {
            if(i==1 || k==i || k==size){
                 printf("* ");
            }else{
                  printf("  ");
            }
       }
        printf("\n");
    }

    return 0;
}
