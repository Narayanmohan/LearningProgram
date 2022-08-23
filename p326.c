/*Program No-p326.c
dt-8-23-2022
Concept-Pointers with charArray
Next Program-Read text until $ is given and Delete the Comma
-------------------------------------------------------------------*/ 
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

      
                for(pa=a;*pa!='\0';pa++,pb++)
                {
                
                    if(*pa==',')
                    {
                    
                        pa++;
                       *pb=*pa;
                            
                    }
                    
                    else
                    {                       
                       
                        
                       *pb=*pa;                        
                                             
                    
                    }             
                
                }
            
            *pb='\0';
            
                for(pb=b;*pb!='\0';pb++)
                {
                    putchar(*pb);    
                
                }
                
}