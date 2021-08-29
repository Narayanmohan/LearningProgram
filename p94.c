/*Program No- P94.c
dt- 7-15-2021
Concept: Matrix
Program Name-Read and Find the nth row sum

--------------------------------------------------------------------------------------------------------------------
Example:

[1, 4,7]
[2, 7,3]
[8,-3,1]

Read n

say n= 1;

then the fist row sum is => 1+4+5 =10





-------------------------------------------------------------------------------------------------------------------*/
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
row=0;
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