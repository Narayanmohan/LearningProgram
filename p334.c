/*program No-p334.c
dt-9-9-2022
Concept-Pointer to Pointer
Next Program-Read text until $ is given and Display the Nth Line using pointer to pointer Concept
--------------------------------------------------------------------------------------------------------------
**pb => means it print values.

pb=b =>we store the bth first address in pb.so the pb hold the address of b but when you say *pb=a means

1)- pb=b ----pb|x707 |
                  |
                  |

2)-*pb=a ----*pb|x708|               

3)-**pb -> means value from this Address only
--------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    char a[100];
    char *pa;    
    char *b[100];    
    char **pb;    
             
    int i,n;   
    
            for(pa=a;(*pa=getchar())!='$';pa++);            

            *pa='\0';                       
            
                pb=b; // we store address in pb
                 
                *pb=a; //*pb hold the address of a, we store another address in *pb
                
                                 
  //               printf("%p %p \n",pb,b);
    
  //               printf("%p %p \n",*pb,a);    
                 
  //               putchar(**pb);
                 
                 pb++;                                                       
                           
                for(pa=a;*pa;pa++)
                {
                
                    if(*pa=='\n')
                    {
                            
                    
                         *pb=pa+1;                         
                        
                         //putchar(**pb);
                                 
                         pb++;                    
                    }             
                
                }                        
          
       *pb=NULL;
       
       scanf("%d",&n);                                           
    
    
   for(pb=b,pa=*(pb+n-1);*pa!='\n';pa++)
    {
    
        putchar(*pa);
    
    }
                                     
             
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                for(pa=a;*pa;pa++)
                {
                
                    if(*pa=='\n')
                    {
                    
                        *pb=pa+1;
                        
                         pb++;
                    
                    }
                
                               
                
                }            
                
                scanf("%d",&n);            
                            




         
  
}
