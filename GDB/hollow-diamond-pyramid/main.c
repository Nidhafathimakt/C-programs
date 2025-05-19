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
    for(i=1;i<row;i++){
        for(j=i;j<=row;j++){
            printf(" ");
        }
        for(k=1;k<i;k++){
            if(k==1){
                printf("* ");
            }else{
                printf(" ");
            }
        }
        for(l=1;l<=i;l++){
            if(l==i){
                printf("* ");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
     for(i=1;i<=row;i++){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(k=i;k<row;k++){
            if(k==i){
                printf(" *");
            }else{
                printf(" ");
            }
        }
        for(l=i;l<=row;l++){
            if(l==row){
                printf(" *");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
