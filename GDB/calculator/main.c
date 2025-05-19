/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{                                                 
    int num1=8,num2=7;
   char operator='/';
    switch(operator){
        case '+':
            printf("%d + %d = %d",num1, num2, num1 + num2);
        break;
        case '-':
            printf("%d - %d = %d",num1, num2, num1 - num2);
        break;
        case '/':
            printf("%d / %d = %d",num1, num2, num1 / num2);
        break;
        case '*':
            printf("%d * %d = %d",num1, num2, num1 * num2);
        break;
        default:
        printf("invalid");
    }
    

    return 0;
}
