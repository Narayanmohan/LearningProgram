/*Program No - P91.c
dt 7-15-2021
Concept: Matrix
Program Name: Find the Transpose of a given matrix 

Transpose => Rows will become Column
--------------------------------------------------------------------------------------------------
 Input					  Output

[1	2	3]			[1	4	7]
[4	5	6]		=>	[2	5	8]
[7	8	9]			[3	6	9]


    j0  j1  j2
i0 |0,0|0,1|0,2|
i1 |1,0|1,1|1,2|
i2 |2,0|2,1|2,2|

  k  j	      i,k	
a[0][0]=1 =>k[0,0]    1 4 7
a[1][0]=4 =>k[0,1]     
a[2][0]=7 =>k[0,2] 


a[0][1]=2 =>k[1,0]   2 5 8
a[1][1]=5 =>k[1,1]
a[2][1]=8 =>k[1,2]



a[0][2]=3 =>k[2,0] 3 6 9
a[1][2]=6 =>k[2,1]
a[2][2]=9 =>k[2,2]



k|j	  i|k
===	|==== 
0|0     |0|0
1|0     |0|1
2|0     |0|2


0|1     |1|0
1|1     |1|1
2|1     |1|2


0|2     |2|0
1|2     |2|1
2|2     |2|2

--------------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------------*/

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
    
        printf("%d\t",b[i][j]);
        j++;
    
    }
i++;
printf("\n");
}





}