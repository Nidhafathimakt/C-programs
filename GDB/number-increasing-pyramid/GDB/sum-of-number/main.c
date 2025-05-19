/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,sum=0,rem;
    printf("Enter a number");
    scanf("%d",&n);
    
    while(n != 0){
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;

    }
    printf("%d",sum);

    return 0;
}