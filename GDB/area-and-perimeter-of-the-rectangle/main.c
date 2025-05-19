/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int l,w,area,perimeter;
    printf("Enter the height of the rectangle:\n");
    scanf("%d",&l);
    printf("Enter the width of the rectangle:\n");
    scanf("%d",&w);
    area=l*w;
    perimeter=2*(l + w);
    printf("Area of the rectangle is: %d\n",area);
    printf("Perimeter of the rectangle is: %d",perimeter);

    return 0;
}
