/*Program No-p275.c
dt-5-15-2022
Concept:Function
Next Program-Display 3x3 Matrix
---------------------------------------------------------------------------------------*/
#include<stdio.h>
void Read(int a[3][3]);
void MatrixDisplay(int p[3][3]);
int main()
{

    int a[3][3];
            
    Read(a);
    
    MatrixDisplay(a);
    


}

void Read(int a[3][3])
{
    int i,j;
    
    
    for(i=0;i<=2;i++)
    {

        for(j=0;j<=2;j++)
            { 
        
                scanf("%d",&a[i][j]);
                    
            }
   }


}


void MatrixDisplay(int p[3][3])
{

    int j,k;
    
    for(j=0;j<=2;j++)
    {
    
        for(k=0;k<=2;k++)
        {
        
            printf("%d\t",p[j][k]);
        
        }
       
       printf("\n"); 
    
    }



}


