/*Program No-P342.c
dt-9-16-2022
Concept-Function-Pointers
Concept-From the Main pass the address to the function
Next Program-Sum of Two Numbers-pass the address to the function from main and print in main
--------------------------------------------------------------------------------------------*/
#include<stdio.h>

void sumTwoNum(int a,int b,int *sum);

int main()
{
    
    int a, b, sum;
    
    scanf("%d%d",&a,&b);
    
    sumTwoNum(a,b,&sum);
    
    printf("%d",sum);    
    

}


void sumTwoNum(int a,int b,int *sum)
{

    *sum=a+b;   
    
}