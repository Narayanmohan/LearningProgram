/*Program No P90.c
dt 7-15-2021
Concept: Matrix
Program Name: Product of Two Matrix 
------------------------------------------------------------------------------------------*/

[1 3 2 ]    [2 1 1 ]
[3 1 1 ] x  [1 0 0 ]
[1 2 2 ]    [1 3 1 ]


[ 1*2+3*1+2*1  1*1+3*0+2*3  1*1+3*1+2*1]
[ 3*2+1*1+1*1  1*1+3*0+3*2  3*1+1*1+1*1]
[ 2*2+2*1+2*1  1*1+2*0+2*3  1*1+2*1+2*1]



|0,0|0,1|0,2|
|1,0|1,1|1,2|
|2,0|2,1|2,2|






















----------------------------------------------------------------------------------------------

#include<stdio.h>
int main()
{

 int i,j,k,a[3][3],b[3][3],c[3][3];
 
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

    scanf("%d",&b[i][j]);
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
        
        c[i][j] = 0;
        k=0;
        while(k<3)
        {
         c[i][j] = c[i][j]+a[i][k]*b[k][j];
         k++;
           
        }
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
 
   printf("%d",c[i][j]);
   j++; 
 
 }
i++;

}

















}

