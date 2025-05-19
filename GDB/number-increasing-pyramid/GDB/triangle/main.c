/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int s1,s2,s3;
    printf("Enter the side one of the triangle:");
    scanf("%d",&s1);
    printf("Enter the side two of the triangle:");
    scanf("%d",&s2);
    printf("Enter the side three of the triangle:");
    scanf("%d",&s3);
    
    if(s1==s2&&s1==s3){
        printf("The sides form an Equiletral Triangle");
    }else if(s1==s2||s1==s3||s2==s3){
        printf("The sides from an Isosceles Triangle");
    }else{
        printf("The sides from a Scalene Triangle");
    }
    
    return 0;
}
