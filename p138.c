/* Program No- p138.c
dt-10-15-2021
Concept - For Loop
Next Program- Read and print the number until -1000 is given
-------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int num;
scanf("%d",&num);

for(; num!=-1000 ;)
{

    printf("%d",num);
    scanf("%d",&num);    
    
}


}