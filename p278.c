
/*Program No-p278.c
dt-5-20-2022
Concept-Function
Next Program-Find the product of Two Matrix
-----------------------------------------------------------------*/
#include<stdio.h>
void prodoftwoMatrix(int a[][3],int b[][3],int c[][3]);
void read(int a[][3]);
void Display(int c[][3]);

int main()
{

int a[3][3];
int b[3][3];
int c[3][3];

read(a);

read(b);

prodoftwoMatrix(a,b,c);

Display(c);

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



void Display(int c[][3])
{

    int k,l;
    
    for(k=0;k<3;k++)
    {
    
        for(l=0;l<3;l++)
        {
        
            printf("%d\t",c[k][l]);
        
        }
        
       printf("\n"); 
    
    }

}


void prodoftwoMatrix(int a[][3],int b[][3],int c[][3])
{

    int i,j,k;
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

         c[i][j] = 0;
         
            for(k=0;k<3;k++)
                {
                
                    c[i][j] = c[i][j]+a[i][k]*b[k][j];
                }
            
        }
    
    }


} 

