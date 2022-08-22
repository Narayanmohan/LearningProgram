/*Program No-P323.c
dt-8-21-2022
Concept-Pointers with CharArray
Next Program-Read text until $ is given and copy the Last N characters.
---------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    char a[100];
    char b[100];   
 
    char *pa,*pb;
 
    int LastNcharacter,length,i;    
    
            pa=a;
            pb=b;
                        
            for(pa=a;(*pa=getchar())!='$';pa++);                                 
            
            *pa='\0';

          
            scanf("%d",&LastNcharacter);

                       
            pa=(pa-LastNcharacter);
                    
            
                       
            for(;*pa!='\0';pa++)
            {
                          
                *pb=*pa;
                 pb++;           
                          
            }                                    

           *pb='\0';
           
           for(pb=b;*pb!='\0';pb++)
           {
           
               putchar(*pb);
           
           } 


 }           
            
            
            
            
            
            
            
            
            
            
            
               
                   


