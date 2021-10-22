/*program No-p165.c
dt-10-21-2021
Loop - For Loop
Concept-Array in ForLoop
Next program->Read 3x3 Matrix and search the given number exists in the Matrix
---------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j,a[3][3],num,flag;

for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    
    }

}


scanf("%d",&num);

flag =0;

for(i=0;i<3;i++)
{

    for(j=0;j<3;j++)
    {
    
        if(num==a[i][j])
        {
            
            flag =1;
        
        }
    
    }

}

if(flag==1)
{
    printf("The Given number is exist= %d",num);
    
}

else
{
    printf(" The Given number does not exist %d",num);

}


}