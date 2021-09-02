/*Program No- p120.c
dt-9-1-2021
Concept:Char Array
Next Program:Merge Two Text
-------------------------------------------------------------------------------------
Example:

Input=> A => abcd
B=> efgh
c=> abcdefgh

----------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j,k,ctr;
char a[100];
char b[100];
char c[100];

i=0;

scanf("%c",&a[i]);

while(a[i]!='$')
{

i++;
 
scanf("%c",&a[i]);  

}

j=0;
scanf("%c",&b[j]);

while(b[j]!='$')
{

j++;

scanf("%c",&b[j]);


}
ctr=0;
i=0;

while(a[i]!='$')
{

ctr = ctr +1;
i++;


}

k=0;
i=0;

while(i<ctr)
{
    c[k] = a[i];
    i++;
    k++;

}

k=ctr;
j=0;
while(b[j]!='$')
{

 c[k] = b[j];
 j++;
 k++;


}

k=0;
while(c[k]!='$')
{

 printf("%c",c[k]);
 k++;

}


}
