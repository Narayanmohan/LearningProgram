/*Program No-P383.c
dt-11-15-2022
Concept-Malloc with Integer pointers
Next Program-Read and Display number until -1000 is given
----------------------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>
int main()
{

int *pa,n;

scanf("%d",&n);


    pa=(int *)malloc(n*sizeof(int));
    
    scanf("%d",pa);
    
        for(;*pa!=-1000 ;)
        {
        
            printf("%d \n",*pa);
            
            scanf("%d",pa);
        
        }

free(pa);

}
