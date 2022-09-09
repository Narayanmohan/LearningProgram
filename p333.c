/*Program No-P333.c
dt-9-9-2022
Concept-Pointers with CharArray
Concept-Pointer to Pointer*
Next Program -Read text until $ is given and store the starting position of eachline using pointer to pointer*
---------------------------------------------------------------------------------------------------------------------
Note:

 Here we are taking a th starting position of each line so we have assigned *pb=a;

--------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    char a[100];
    
    char *pa;

    char *b[100];

    char **pb;

        pb=b;
        
        
        *pb=a;
            
         pb++;
              
               for(pa=a;(*pa=getchar())!='$';pa++);

               *pa ='\0';               
   
         
                 for(pa=a;*pa;pa++)
                 {
                 
                     if(*pa=='\n')
                     {
                     
                         *pb=pa+1;
                          pb++;
                     
                     }
                 
                 }
                    
                 *pb=NULL;
              
                 for(pb=b;*pb!=NULL;pb++)
                 {
                 
                     printf("%p \n",*pb);
                     
                 }
                 
 }