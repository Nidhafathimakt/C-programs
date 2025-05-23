/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,value[100],limit,even=0,odd=0;
    printf("Enter limit: ");
    scanf("%d",&limit);
    
    printf("Enter the values: ");
    for(i=0;i<limit;i++){
        scanf("%d",&value[i]);
    }
    
    for(i=0;i<limit;i++){
        if(value[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("Number of even %d\n",even);
    printf("Number of odd %d",odd);

    return 0;
}
