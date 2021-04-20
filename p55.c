/*Program No - p55.c
dt - 4-18-2021
Program Name: Re-write : print a word to the given vowel uppercase as well as lower case
--------------------------------------------------------------------------------------------
Analysis:
     input: ch
     output: vowelinword
     Logic:
          case 'A':
          case 'a':
             printf("Apple")
          break;
          -
          -
          -
          -
          -
          default:
          printf("Print word only for vowel")
------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    char ch;
    scanf("%c",&ch);
    
    switch(ch)
    {
         case 'A':
         case 'a':
         
           printf(" word for vowel a/A is Apple = %c ",ch);
         
         break;
         
         case 'E':
         case 'e':
                 
          printf(" word for vowel e/E is Elegant = %c ",ch);
          
          break;
          
         case 'I':
         case 'i':
         
          printf(" word for vowel i/I is Ink = %c ",ch);
         
         break;
         
         case 'O':
         case 'o':
         
         printf(" word for vowel o/O is Orange = %c ",ch);
         
         break;
         
         case 'U':
         case 'u':
         
         printf("word for vowel u/U is Umbrella = %c ",ch);
         
         default:
         
         printf("Print word only for vowel and NOT for other then vowels = %c ",ch);
           
   
          
    
    
    }

         
}               