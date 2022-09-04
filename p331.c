/*Program No-P331.c
dt-9-3-2022
Concept-Pointers
Next Program-Display nth line from mth line using Pointers
---------------------------------------------------------------------------
b[j]=NULL -> Since it is a Pointer we assume the Last address value is NULL

if it is a char Array then last value in the array is '\0'.

if it is an integer Array then the last value in the array is -1

--------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    char a[100];

    char *pa;
    char *pc;

    char *b[100];

    int i,j,n,m;

    m=0,n=0;           

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
      
                   b[i]=NULL;     
      
                    scanf("%d",&n);                    

                    scanf("%d",&m);
                       
                        pc=b[m+n];
                                  
                                                
                        for(pa=b[n-1];pa<pc;pa++)
                        {
                            putchar(*pa);
                        
                        }         
                                                                         
                

}
