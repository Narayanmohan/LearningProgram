/*Program No-P329.c
dt-8-31-2022
Concept-Pointers
Next Program-Read text until $ is given and Print the Starting position of each line
---------------------------------------------------------------------------------------------
Char  a[100],*pa;
char *b[100];


NOTES:
    IF WE WANT TO ACCESS POSITION OR ADDRESS USING POINTERS THEN WE HAVE TO USE *pa 
    that means address of each character in the Array.
    
    IF WE WANT TO STORE THE POSITION OR ADDRESS TO THE ANOTHER ARRAY THEN WE HAVE TO USE
    CHAR *b[100] that means Array of address
    
---------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    char a[100],*pa;
    char *b[100];
    int i;
        
    
            
        
            for(pa=a;(*pa=getchar())!='$';pa++);
            
            *pa='\0';         
               
            
                i=0;
                b[i]=a;
                i++;
            
               
                for(pa=a;*pa;pa++)
                {
                
                    if(*pa=='\n')
                    {
                        
                       b[i]=pa+1;
                       i++;                                                              
                        
                    
                    }
                
                }
        
                    
                    b[i]=NULL;
                    
                    for(i=0;b[i]!=NULL;i++)                   
                    {
                    
                           
                        printf("%u",b[i]);
                        
                    }
                    
}
