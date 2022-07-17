/*Program No- P96.c
dt - 7-15-2021
Concept: Matrix
Next Program Name-Search the given number Exist in the Matrix
-------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j,a[3][3],num,flag;
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

i=0;
scanf("%d",&num);
flag=0;

while(i<3)
{

 j=0;
 
 while(j<3)
 {
 
     if(num == a[i][j])
     {
     
         flag=1;
        
     }
 j++;
 
 }    
i++;

}


 if(flag==1)
 {
 
     printf("%d Given Number Exist in the Matrix ",num);
     
 }
else
{
    printf("%d Given Number does NOT exist in the Matrix",num);

}

}
