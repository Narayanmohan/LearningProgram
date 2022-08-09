/*program No-p317a.c
dt-8-9-2022
Concept-Char Array
Concept-Pointers with CharArray
Next Program-Read and display a text until $ is given
--------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    
    int i;
    
    char a[100],*pa;
    
    i=0;
        
    scanf("%c",&a[i]);
    
    pa=&a[i];
    
        while(*pa!='$')
        {
                                    
             printf("%c",*pa);
             scanf("%c",pa);
             
             i++;                      
        
        } 

    }