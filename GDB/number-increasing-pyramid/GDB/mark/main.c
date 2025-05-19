/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int roll;
    char name[10];
    float phy,chm,ca,total,percentage;
    
    printf("Enter the roll number of the student:");
    scanf("%d",&roll);
    printf("Enter the name of the student: ");
    scanf("%s",name);
    printf("Enter the marks of Physics, Chemistry and Computer Application: ");
    scanf("%f%f%f",&phy,&chm,&ca);
    total=phy+chm+ca;
    percentage=total/3;
    
    printf("Roll NO: %d\n",roll);
    printf("Name of the student: %s\n",name);
    printf("Marks in Physics: %f\n",phy);
    printf("Marks in Chemistry: %f\n",chm);
    printf("Marks in Computer Application: %f\n",ca);
    printf("Total Marks: %f\n",total);
    printf("percentage: %f",percentage);
    
    return 0;
}
