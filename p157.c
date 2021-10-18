/*Program No-p157.c
dt-10-17-2021
Loop Concept- For Loop
Concept-Array in For Loop
Next Program - Read and Display 3X3 Matrix 
--------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i ,j,a[3][3];

for(i=0;i<=2;i++)
{
    for(j=0;j<=2;j++)
    {
    
        scanf("%d",&a[i][j]);
    
    }
    
}


for(i=0;i<=2;i++)
{
    for(j=0;j<=2;j++)
    {
        
        printf("%d\t",a[i][j]);
        
    }
printf("\n");

}



}