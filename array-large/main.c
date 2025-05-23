/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,arr[] = {10,20,30};
      int large = arr[0];
    for(i=0;i<3;i++){
        if(arr[i]>large){
            large = arr[i];
        }
    }
    
    printf("largest number is %d",large);

    return 0;
}
