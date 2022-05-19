/*Program P277a.c
dt-5-18-2022
Concept-Function
Next Program -Find the sum of Two matrix 
-------------------------------------------------------------------------------*/
#include<stdio.h>
void  sumofTwoMatrix(int a[][3],int b[][3],int c[][3]);
void  read(int a[][3]);
void  DisplaysumofTwoMatrix(int c[][3]);
int main()
{

int a[3][3];
int b[3][3];
int c[3][3];

read(a);

read(b);

sumofTwoMatrix(a,b,c);

DisplaysumofTwoMatrix(c);

}


void sumofTwoMatrix(int a[][3],int b[][3],int c[][3])
{
 
int i,j;

for(i=0;i<3;i++)
{
 
  for(j=0;j<3;j++)
  {
  
  c[i][j]=a[i][j]+b[i][j];  

  }


}

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

void DisplaysumofTwoMatrix(int c[][3])
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




