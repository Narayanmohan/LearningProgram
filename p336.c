/*Program No-P336.c
dt-9-12-2022
Concept-Pointer to Pointer / Double Pointer
Next Program-Read txt until $ is given and Display the Last Nth Line using pointer to Pointer
----------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    char a[100];    

    char *pa;    

    char *b[100];    

    char **pb;    

    int LastNthLine;    

    LastNthLine=0;
    
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
         
               scanf("%d",&LastNthLine);       


              
                  for(pa=*(pb-LastNthLine);*pa;pa++)
                  {
                  
                      putchar(*pa);
                  

                  }

}