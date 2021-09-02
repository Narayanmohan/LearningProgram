/*Program No- p122.c
dt-9-2-2021
Concept: CHAR ARRAY
Next Program: Read text and convert pascal to Fortran
------------------------------------------------------------------------------------
Example:

Input => 
a:10;
b=20;


output =>
a=10;
b=20;

Example:

     0  1  2  3  4
a=> [a][:][L][;][m]  


    0  1  2  3  4
b=>[a][=][L][m][]

-------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j;

char a[100];
char b[100];


i=0;

scanf("%c",&a[i]);

while(a[i]!='$')
{

i++;

scanf("%c",&a[i]);


}

a[i]='\0';
i=0;
j=0;

while(a[i]!='\0')
{

if(a[i]==':')
{
 b[j]= '=';

}

else if(a[i]==';')
{

i=i+1;

}

else
{

b[j] = a[i];
}
i++;
j++;
}
b[j]='\0';
j=0;

while(b[j]!='\0')
{

printf("%c",b[j]);
j++;

}

}
