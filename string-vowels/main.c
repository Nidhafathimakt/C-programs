/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    int i,length,vowel=0,consonants=0;
    char str[100];
    
    printf("Enter word: ");
    scanf("%s",str);
    length=strlen(str);
    for(i=0;i<length;i++){
         if(str[i]=='a'|| str[i]=='e'|| str[i]=='i' || str[i]=='o'|| str[i]=='u'){
             vowel++;
        }else{
            consonants++;
        }
    }
   
    
    printf("Number of vowels %d\n",vowel);
    printf("Number of consonants %d",consonants);

    return 0;
}