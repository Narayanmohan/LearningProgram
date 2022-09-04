/*Program No- p126.c
dt-9-28-2021
Concept:-While Looping
Next Program: Display the  "N" th Line from the" M "  th Line
---------------------------------------------------------------------------
Example:

 0  1  2  3
[G][O][A][\N]


 4  5  6  7  8  9  10  
[T][R][I][C][H][Y][\N]
 
 11  12  13  14  15  16  17 18
[M] [A] [D] [U] [R] [A] [I][\n] 
 

 19 20 21 22 23 24 25 26 27 28
[V][I][J][A][Y][W][A][D][A][\N]   


     0   1   2    3    4
b=> [0] [4] [11] [19] [29]

mthline =>1

nthline =>2
-----------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j,m,n,po,limit;

char a[100];
char b[100];


    i=0;

    scanf("%c",&a[i]);

    while(a[i]!='$')	
    {

    i++;
    
    scanf("%c",&a[i]);

    }

a[i] = '\0';

i=0;
j=0;

b[j] = i;
j++;


while(a[i]!='\0')
{

    if(a[i]=='\n')
    {
        po = i+1;
        b[j] = po;
        j++;    
    
    }

i++;

}

limit=0;

b[j] = -1;

scanf("%d",&m);

scanf("%d",&n);

i=b[m-1];

limit = b[m+n];


while(i<limit)
{
 
  printf("%c",a[i]);
  i++;


}


}
