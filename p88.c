/*Program No-P88.c
dt-7-14-2021
Concept : TWO DIMENSIONAL ARRAY
Program Name: Read and Display 3X3 Matrix 
---------------------------------------------------------------------------------------------------

Two Dimensional Array:

-Array of Arrays
-We can represent as a matrix
                        |R|C|
-datatype variable name [3][3]
 


For example if we want to declare an integer array

int a[3][3]

a[0][0]  = 10
a[0][1]  = 20


int matrix [2][4]
 
    0   1  2  3
0 |  |  |  |  |
1 |  |  |  |  |

-------------------------------------------------------------------------------------------------*/

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