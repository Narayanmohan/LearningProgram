/*Program No-P331.c
dt-9-3-2022
Concept-Pointers
Next Program-Display nth line from mth line using Pointers
----------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    
    char a[100];
    char *pa;
    char *pc;
    char *b[100];
    int i,j,n,m;
               
           for(pa=a;(*pa=getchar())!='$';pa++);            
            
               *pa='\0';
                
                i=0;
                j=0;   
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
      
                    scanf("%d",&n);                    

                    scanf("%d",&m);
                       
                       pc=b[m];
                                                     
                       *pa='\0';
                           
                        for(pa=b[n-1];pa<pc && *pa!='\n';pa++)
                        {
                            putchar(*pa);
                        
                        }                         
                                                                         
                    

}
