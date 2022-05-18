/*Program No-p277.c
dt-5-18-2022
Concept-Function
Next Program-Find the sum of Two Matrices
-------------------------------------------------------*/
#include<stdio.h>
void read(int a[][3]);
int sumofMatrix(int b[][3]);
int main()
{
    int resultsum;
    int a[3][3];
    int b[3][3];
    
    read(a);
    resultsum=sumofMatrix(a);
    printf("Sum of Matrix = %d",resultsum);

}

void read(int a[][3])
{
    int i,j;
    
    for(i=0;i<3;i++)
    {
    
        for(j=0;j<3;j++)
        {
        
            scanf("%d",&a[i][j]);
        }
    
    }


}

int sumofMatrix(int b[][3])
{

    int k,l,sum;
    sum =0;
    
    for(k=0;k<3;k++)    
    {
        
        for(l=0;l<3;l++)
        {
        
            sum = sum+ b[k][l];
        
        }
    
    
    }
    
  return sum;  

}

