/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,limit,a[10],searchKey,flag=0;
    printf("Enter limit: ");
    scanf("%d",&limit);
    
    printf("Enter the values:");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    
    printf("Please enter search key:");
    scanf("%d",&searchKey);
    for(i=0;i<limit;i++){
        if(searchKey==a[i]){
           flag=1;
           break;
        }
    }
    
    if(flag==1){
        printf("Value found");
    }else{
        printf("Value not found");
    }

    return 0;
}