/*Program No- p160.c
dt-10-17-2021
Loop concept- For Loop
Concept- Array in For Loop
Next Program -Read 3x3 Matrix and Find the Transpose of the given Matrix
----------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    
int i,j,a[3][3],b[3][3];

for(i=0;i<3;i++)
{

    for(j=0;j<3;j++)
    {
        
       scanf("%d",&a[i][j]);
        
    
    }

}
for(i=0;i<3;i++)
{

    for(j=0;j<3;j++)
    {
    
        b[i][j] = a[j][i];
    
    }

}


for(i=0;i<3;i++)
{

    for(j=0;j<3;j++)
    {
    
        printf("%d \t",b[i][j]);
    
    }
printf("\n");

}


}


