/*Program No-P348.c
dt-9-22-2022
Concept-Function Pointers
Next Program-Count Number of words, lines and Characters using Function Pointers
---------------------------------------------------------------------------------*/
#include<stdio.h>

void read(char *pa);

void count(char *pa);

    int wordCount,lineCount,charCount;

int main()
{

    char a[100];
    read(a);
    count(a);
    
    printf("\nlinecount=%d \nwordcount=%d \ncharcount=%d",lineCount,wordCount,charCount);
    
}

void read(char *pa)
{

    for(;(*pa=getchar())!='$';pa++);
    
    *pa='\0';

}

void count(char *pa)
{

    wordCount=lineCount=charCount=0;
    
    
        for(; *pa!='\0';pa++)
        {
        
            if(*pa=='\n')
            {
            
                lineCount=lineCount+1;
            }
            
            else if(*(pa+1)==' '||*(pa+1)=='\n'||*(pa+1)=='\0')
            {
            
                wordCount=wordCount+1;
            }
            
            charCount=charCount+1;          
            
        
        }

}