/*program No-p317a.c
dt-8-9-2022
Concept-Char Array
Concept-Pointers with CharArray
Next Program-Read and display a text until $ is given
--------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    
    int i,j;
    
    char a[100],*ca;
    
    i=0;
        
    scanf("%c",&a[i]);
    
    ca = &a[i];
    
        while(*ca!='$')
        {
             i++;
                            
             scanf("%c",ca+i);
        
        }  
    
    

    i=0;
    
        while(*ca!='$')
        {
        
            printf("%c",*ca[i]);
            
            i++;
        }    
        

}