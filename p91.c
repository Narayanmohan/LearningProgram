/*Program No - P91.c
dt 7-15-2021
Concept: Matrix
Program Name: Find the Transpose of a given matrix */

#include<stdio.h>
int main()
{

int i,j,a[3][3],b[3][3];

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
while(i<3)
{
    j=0;
    while(j<3)
    {
        b[i][j] = a[j][i];
        j++;
    
    
    }
i++;

}


i=0;
while(i<3)
{

    j=0;
    while(j<3)
    {
    
        printf("%d",b[i][j]);
        j++;
    
    }
i++;

}





}