/*Program No- p125.c
dt-9-2-2021
Concept:Char Array
Next Program: Print 'Nth" line
------------------------------------------------------------------------------------------------------
Example:

    0  1  2  3  4   5  6  7   8  9
a=>[p][r][a][y][\n][g][o][d][\n][$]
                
                1            2      

      0  1  2     
b= > [0][5][9]


------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i ,j,n,po;

char a[100];
int  b[100];

po=0;

n=0;

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

b[j]=i;

j++;

while(a[i]!='\0')
{


    if(a[i]=='\n')
     {
    
     po= i+1;

     b[j]=po;

     j++;
  
     }

       i++;
    
 
}

b[j]= -1;


scanf("%d",&n);

i=0;

i= b[n-1];

while(a[i]!='\n' && i!=-1)
{
    
    printf("%c",a[i]);

    i++;
}


}

    