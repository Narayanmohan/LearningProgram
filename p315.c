/*Program No-p315.c
dt-8-7-2022
concept-Pointers
Next Program-Biggest of Two Numbers using Pointers
---------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    int a, b,*pa,*pb,*pc;
    
        scanf("%d%d",&a,&b);
        
        pa=&a;
                        
        pb=&b;
        
            
        *pc=*pa>*Pb?*pa:*pb;
       
                
                printf("%d",*pc); 


}
