/*Program No- P94.c
dt- 7-15-2021
Concept: Matrix
Program Name-Read and Find the nth row sum */
#include<stdio.h>
int main()
{
    int i,j,sum,row,a[3][3];
    i=0;
    while(i<3)
    {
        j=0;
        while(j<3)
        {
            scanf("%d",&a[i][j]);
            j++;
        
        
        }
    i++;
    
    }

sum=0;
scanf("%d",&row);
i=0;
while(i<3)
{
sum = sum +a[row][i];
i++;
    

}

printf("%d",sum);




}