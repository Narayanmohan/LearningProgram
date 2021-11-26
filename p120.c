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

int i,j,k,length;
char a[100];
char b[100];
char c[100];

length = 0;

i=0;


scanf("%c",&a[i]);

while(a[i]!='$')
{

i++;
 
scanf("%c",&a[i]);  

}


a[i]='\0';



j=0;

scanf("%c",&b[j]);


while(b[j]!='$')
{

j++;

scanf("%c",&b[j]);


}


b[j]='\0';

i=0;

while(a[i]!='\0')
{

length = length +1;

i++;

}

//printf("Length is = %d",length);

k=0;

i=0;

while(i < length)
{
    c[k] = a[i];
    i++;
    k++;

}



j=0;

while(b[j]!='\0')
{

 c[k] = b[j];
 j++;
 k++;


}
c[k]='\0';

k=0;

while(c[k]!='\0')
{

 printf("%c",c[k]);
 
 k++;

}


}
