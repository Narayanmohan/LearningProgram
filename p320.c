/*Program No-p320.c
dt-8-13-2022
Concept-Pointers with CharArray
Next Program-Read text and copy to another Array
--------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    char a[100];
    
    char b[100];
    
    char *pa,*pb;
    
    pa=a;
    pb=b;
    
        for(pa=a;(*pa=getchar())!='$';pa++);
                               
                          
             *pa='\0';            
        
            for(pa=a;*pa!='\0';pa++)
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