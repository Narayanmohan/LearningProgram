/*Program No-P340.c
dt-9-15-2022
Concept-Funtion Pointers
Next Program-Sum of Two Numbers using Function Pointers
-----------------------------------------------------------------------*/
#include<stdio.h>

int sumTwoNumber(int *pa,int *pb);

int total;

int a,b;

int main()
{

    int x,y,k;    
    
    k=sumTwoNumber(&x,&y);
    
    printf("%d",k);
}

int sumTwoNumber(int *pa,int *pb)
{


    scanf("%d%d",&a,&b);
    
    pa=&a;
    
    pb=&b;
    

    total=*pa+*pb;
     

    return total;

}