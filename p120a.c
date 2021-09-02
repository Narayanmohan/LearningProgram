/* Program No- p120a.c
dt-9-2-2021
Concept: Char Array
Next Program: Merge text in another way
----------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j,k;

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

a[i]='\0';
j=0;
scanf("%c",&b[j]);

while(b[j]!='\0')
{
    j++;
    scanf("%c",&b[j]);

}



b[j] = '\0';
i=0;
k=0;

while(a[i]!='\0')
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

c[k] = '\0';
k=0;
while(c[k]!='\0')
{

printf("%c",c[k]);
k++;

}

}