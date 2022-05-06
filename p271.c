/*Program No-P271
dt-5-5-2022
Concept-Function
Next Program-Read and Display ten numbers using Array using Function
--------------------------------------------------------------------------*/
#include<stdio.h>
void Read();
void Display();
int main()
{
int k,l;

Read(k);

Display(l);

}

void Read()
{
    int i;
    
    int a[10];
        
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    
    }


}

void Display()
{
 
 int j;
 
 int a[10];
    
    for(j=0;j<10;j++)
    {
        printf("%d",a[j]);
    
    }


}