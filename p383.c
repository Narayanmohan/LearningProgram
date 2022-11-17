/*Program No-P383.c
dt-11-15-2022
Concept-Malloc with Integer pointers
Next Program-Read number until -1000 and display on the screen
---------------------------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>
int main()
{

int *pa,*pb,n;

scanf("%d",&n);


    pa=pb=(int *)malloc(n*sizeof(int));
    
    
 
    
    
        for(scanf("%d",pa);*pa!=-1000;)
        {
            pa++;
                     
            scanf("%d",pa);
            
        
        }
        
        for(pa=pb;*pa!=-1000;pa++)
        {
        
            printf("%d\n",*pa);
        
        }  
        


free(pb);

}
