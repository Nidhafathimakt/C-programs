/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int arr[n],i;
    
    for(i=1;i<=n;i++){
        printf("Element %d:",i);
        scanf("%d",&arr[i]);
        
    } 
    
    printf("You have eneterd:");
    for(i=1;i<=n;i++){
        printf("%d\n",arr[i]);
    }
    

    return 0;
}
