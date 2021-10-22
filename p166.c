/*program No-p166.c
dt-10-21-2021
Loop Concept- For Loop
Concept-Array in For Loop
Next Program->Read 3x3 matrix and count the number of times the given number exists in the Matrix
-----------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j,a[3][3], num,ctr;

for(i=0;i<3;i++)
{

    for(j=0;j<3;j++)
    {
    
        scanf("%d",&a[i][j]);
    
    }

}


scanf("%d",&num);

ctr=0;

for(i=0;i<3;i++)
{

    for(j=0;j<3;j++)
    {
    
        if(num==a[i][j])
        {
        
            ctr= ctr+1;
            
        
        }
    }


}

printf("The Number of times the given number exist is = %d",ctr);

}
