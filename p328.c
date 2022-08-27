/*Program No-p328.c
dt-8-26-2022
Concept-Pointers with charArray
Next Program-Read text until $ is given and Merge two Arrays
--------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    char a[100];
    char b[100];
    char c[100];
   
        char *pa,*pb,*pc;        
        pa=a;
        pb=b;
        pc=c;
        
            for(pa=a;(*pa=getchar())!='$';pa++);            
            *pa='\0';            
         
                for(pb=b;(*pb=getchar())!='$';pb++);                
                *pb='\0';                  
                    
                    for(pa=a;*pa!='\0';pa++)
                    {                    
                        *pc=*pa;
                         pc++;
                    }            
                    
                   for(pb=b;*pb!='\0';pb++)
                   {                     
                        
                                               
                        *pc=*pb;
                         pc++;                    
                    }
                    
                    pc='\0';                    
                    for(pc=c;*pc!='\0';pc++)
                    {                    
                        putchar(*pc);
                    }

}
