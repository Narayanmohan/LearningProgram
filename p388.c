/*Program No-P388.c
dt-11-21-2022
Concept-Malloc with Function
Next Program-Read and Display numbers until -1000 is given using Function
----------------------------------------------------------------------------------------
Note:

When run the program we have to follow the below steps.

1-cc p388.c
2-./a.out p388.c
3- Enter Malloc size how much we want -> For Example 70
4-Enter number as below
1
2
7
-1000

Out put should be
1
2
7
---------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>
void read(int *pa);
void display(int *pb);
int *pa,*pb,n;
int main()
{

   
    scanf("%d",&n);
    
    pa=pb=(int *)malloc(n*sizeof(int));
    
    read(pa);

    display(pb);
        
    free(pa);
    
}


void read(int *pa)
{
            
    for(scanf("%d",pa);*pa!=-1000;)
    {           
             
        pa++;                  
               
        scanf("%d",pa);            
        
    }


}


void display(int *pa)
{      
    
    for(;*pa!=-1000;pa++)
    {

        printf("%d\n",*pa);
    
    }

}