/*Program No-P88.c
dt-7-14-2021
Concept : Matrix
Program Name: Read and Display 3X3 Matrix */

#include<stdio.h>
int main()
{

    int i,j,a[3][3];
   
    i=0;
   
    while(i<=2)
    {

        j=0;
    
        while(j<=2)
        {
        scanf("%d",&a[i][j]);

        j++;
    
        }    
        
     i++;
    
    }

    
    i=0;
    
    while(i<=2)
    {
    
        j=0;
    
        while(j<=2)
        {
    
        printf("%d",a[i][j]);
        j++;
       
        }    
    i++; 
    printf("\n"); 
          
    }    


}