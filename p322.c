/*Program No-p322.c
dt-8-19-2022
Concept-Pointers with CharArray
Next Program-Read text until $ is given and copy Nth characters from the Mth Position
-------------------------------------------------------------------------------------
Example:
    Input->I LOVE INDIA
    
    N->7
    M->2
    
        OUTPUT->LOVE IN
-------------------------------------------------------------------------------------*/        
#include<stdio.h>
int main()
{

    char a[100];
    char b[100];
    char *pa,*pb,*pc,*pd;
    int limit,nthcha,mpos;
    
        pa=a;
        pb=b;       
        
            for(pa=a;(*pa=getchar())!='$';pa++);
            
                *pa='\0';
                
                    scanf("%d%d",&nthcha,&mpos);
                    
                        pa=(a+nthcha);
                        
                        pc=(a+mpos);
                        
                                                
                            for(pa=a;pc<pa;pa++)
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
