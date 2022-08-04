/*Program No- p119.c
dt-8-30-2021
Concept: Char Array
Next Program: Read text until '$' is given and Reverse the Text
-------------------------------------------------------------------------------*/
#include<stdio.h>

int main()
{

int i ,j,length;

char a[100];

char b[100];

length =0;


i=0;

scanf("%c",&a[i]);

while(a[i]!='$')
{

    i++;
    
    scanf("%c",&a[i]);


}

a[i]='\0';

i=0;

while(a[i]!='\0')
{

    length = length + 1;

    i=i+1;

}

printf("length = %d",length);

i = length-1;

j=0;

while(i>=0)
{

    b[j] = a[i];
    i--;
    j++;

}

b[j]='\0';

j=0;

while(b[j]!='\0')
{

    printf("%c", b[j]);

    j++;


}


}