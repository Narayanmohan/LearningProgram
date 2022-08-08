/*Program No-p317.c
dt-8-8-2022
Concept-Pointers
Next Program-Read and Display a text until $ is given
-----------------------------------------------------------*/
#include<stdio.h>
int main()
{

    char c, *cp;
    
    scanf("%c",&c);
    
    cp=&c;
    
       
           while(*cp!='$')
           {
               
               printf("%c",*cp);
               
               scanf("%c",cp);           
           
           } 

}
