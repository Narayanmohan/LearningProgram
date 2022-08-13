/*Program No-p319.c
dt-8-12-2022
Concept-Pointers with CharArray
Next Program-Count number of words, lines and characters using pointers
------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    char a[100];
    
    char *pa;
    
    int wordcount,linecount,charcount;
    
    wordcount=0;
    linecount=0;
    charcount=0;
    
    pa=a;
    
        for(pa=a;(*pa=getchar())!='$';pa++);
        
            pa='\0';
        
        
            for(pa=a;*pa!='\0';pa++)
            {
            
            
                if(*pa=='\n')
                {
                    linecount=linecount+1;
                
                }
                
                else if(*pa== ' ')
                {
                
                    wordcount=wordcount+1;
                
                }
                
                else
                {
                
                    charcount=charcount+1;
                }
            
            }  
    
printf("\nlinecount=%d \nwordcount=%d \ncharcount=%d",linecount,wordcount,charcount);

}
