/*Program No-P271
dt-5-5-2022
Concept-Function
Next Program-Read and Display ten numbers using Array using Function
//Example-pass by value 
--------------------------------------------------------------------------*/
#include<stdio.h>

void Read(int a[]);
void Display(int a[]);
int main()
{

int a[10];

Read(a);

Display(a);

}

void Read(int a[])
{
    int i;
    
       
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    
    }


}


void Display(int b[])
{
 
 int j;
 
    
    for(j=0;j<10;j++)
    {
        printf("%d",b[j]);
    
    }


}