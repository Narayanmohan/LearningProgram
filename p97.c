/*Program No - P97.c
dt-7-15-2021
Concept: Matrix
Program Name:Count the number of times the given number exist */

#include<stdio.h>
int main()
{
    int i,j,a[3][3],num,ctr;
    
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



scanf("%d",&num);
ctr=0;
i=0;
while(i<3)
{

    j=0;
    
    while(j<3)
    {
    
        if(num==a[i][j])
        {
        
         ctr = ctr+1;
         j++;
        
        }
        i++;
    
    }
    
   printf("The Number of times  the give number exist = %d",ctr); 

}     


}