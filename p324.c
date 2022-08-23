/*Program No-p324.c
dt-8-22-2022
Concept-Pointers with CharArray
Next Program-Read text until $ is given and convert upper to lower using pointers
-----------------------------------------------------------------------------------
-cc p324.c
-./a.out p324.c

I Love India$

Output should be=>i love india


-----------------------------------------------------------------------------------*/
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
            
                if(*pa>=65 && *pa<=90)
                {
                
                    *pb=*pa+32;
                    
                    pb++;                    
                
                }
                else
                {
                    *pb=*pa;
                     pb++;
                }
            
            }
    
            *pb='\0';
            
            for(pb=b;*pb!='\0';pb++)
            {
            
                putchar(*pb);
            
            }


}