/*Program No-P335.c
dt-9-11-2022
Concept-Pointer to Pointer
Next Program-Read txt until $ is given and copy nth line from mth line using Pointer to Pointer
----------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    char a[100];
    
    char *b[100];    
       
    char *pa;
    
    char *pc;
       
    char **pb;    
           
            int m,n;
  
            m=0,n=0; 
             
            for(pa=a;(*pa=getchar())!='$';pa++);
            
            *pa='\0';
   
             pb=b;
             
            *pb=a;
            
             pb++;
              
            
                 for(pa=a;*pa;pa++)
                 {                     
                         if(*pa=='\n')
                         {
                         
                             *pb=pa+1;                                                
                              
                              pb++;                                                       
                         
                         }       
                 } 

  *pb=NULL;                 

  scanf("%d",&n);
 
  scanf("%d",&m); 
        
               pb=b;
    
               pc=*(pb+m+n);              
                             
               for(pa=*(pb+n-1); pa<pc;pa++)
               {           
                                                            
                    putchar(*pa);
               
               }   
             
              
 
}
 
