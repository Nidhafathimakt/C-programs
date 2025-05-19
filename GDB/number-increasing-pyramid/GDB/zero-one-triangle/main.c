/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            if((i+j)%2==0){
                 printf("1 ");
                 
            }else{
               printf("0 ");
               
            }
           
        }
        printf("\n");
    }

    return 0;
}