/*Program No-P340.c
dt-9-15-2022
Concept-Funtion Pointers
Next Program-Sum of Two Numbers using Function Pointers
-----------------------------------------------------------------------*/
#include<stdio.h>

int sumTwoNumber(int *pa,int *pb);

int main()
{

    int x,y,k;    
    
    k=sumTwoNumber(&x,&y);
    
    printf("Sum of Two Value =%d \n ",k);
}

int sumTwoNumber(int *pa,int *pb)
{

   int total;
    

    *pa=100;
    
    *pb=7; 
    
     total=*pa+*pb;
     

    return total;

}