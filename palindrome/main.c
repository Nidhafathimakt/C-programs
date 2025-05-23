/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    int i,length,isPalindrome=0;
    char str[100],reversed[100];
    printf("Enter a word:");
    scanf("%s",str);
    
   length=strlen(str);
    printf("%d\n",length);
    
    for(i=0;i<length;i++){
        reversed[i] = str[length - 1 - i];
    
    }
    reversed[length]= '\0';
    printf("%s\n",reversed);
    
    if(strcmp(str,reversed)==0){
        printf("is palindrome");
    }else{
        printf("not palindrome");
    }
    
  
    return 0;
}
