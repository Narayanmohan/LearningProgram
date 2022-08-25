/*Program No-p327.c
dt-8-24-2022
Concept-Pointers with CharArray
Next Program-Read text until $ is given and Reverse the text
---------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    char a[100];
    char b[100];
    
    char *pa,*pb,*pc;
    
        pa=a;
        pb=b;

            for(pa=a;(*pa=getchar())!='$';pa++);
            
            *pa='\0';
            
            
                for(pa=a;pc>a;pa--)
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