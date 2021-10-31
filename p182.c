/*program No- p182.c
dt-10-30-2021
Concept- Char Array
Loop- For Loop
Next Program - Read text until '$' is given and reverse the text
---------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j,length;
char a[100];
char b[100];
length =0;

for(i=0;(a[i]=getchar())!='$';i++);


a[i] = '\0';

for(i=0;a[i];i++)
{

    length = length+1;


}
//printf("%d",length);


for(i=(length-1),j=0;i>=0;i--)
{

b[j]=a[i];
j++;

}

b[j]='\0';

for(j=0;b[j];j++)
{

     putchar(b[j]);
 
}

}