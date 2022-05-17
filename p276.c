/*Program No-p276.c
dt-5-16-2022
Concept-Function
Next Program-Find the Transpose of the Given Matrix
------------------------------------------------------------------*/
#include<stdio.h>
void Read(int a[][3]);
void Transpose(int b[][3]);
void Display(int z[][3]);

int main()
{

int a[3][3];
int b[3][3];
int e[3][3];

Read(a);

Display(a);

Transpose(a);

  

}

void Read(int a[][3])
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

void Display(int z[][3])
{

 int q,r;
 
 for(q=0;q<3;q++)
 {
 
   for(r=0;r<3;r++)
   {
    
     printf("%d \t",z[q][r]);
   
   }

  printf("\n"); 
 }


}


void Transpose(int b[][3])
{
 
 int k,l;
 
 int d[3][3];
  
 for(k=0;k<3;k++)
 {
 
   for(l=0;l<3;l++)
   {

       
    printf("%d\t",b[l][k]);
    
   
   }
 
 printf("\n");
 
 }

  
}


