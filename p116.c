/* 
Program No- p116.c
dt-8-30-2021
Concept: Char Array
Next Program: Read text until '$' is given and Convert upper case to lower case 
----------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i ,j;

char a[100];
char b[100];

i=0;
scanf("%c",&a[i]);

while(a[i]!='$')
{

 i++;
 
 scanf("%c",&a[i]);


}

a[i]!='\0';
i=0;
j=0;

while(a[i]!='\0')
{

 if(a[i]>=65 && a[i]<=90)
 {
 
     b[j] = a[i]+32;
     j++;
 }

i++;
}

b[j]!= '\0';
j=0;

while(b[j]!='\0')
{

 printf("%c",b[j]);
 j++;


}


}