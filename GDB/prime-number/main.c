/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int prime=1,n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            prime=0;
        }

    }
    if(prime){
            printf("prime number ");
        }else{
            printf("not prime");
        }
    
    

    return 0;
}
