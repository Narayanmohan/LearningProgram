/*Program No-p188.c
dt-11-10-2021
Concept-Char Array
Loop- For Loop
Next Program-Display the 'n'th Line
-----------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j,n,po;
char a[100];
int b[100];

po= 0;
n=0;

for(i=0;(a[i]=getchar())!='$';i++);


a[i]='\0';

b[j]=i;

j++;


for(i=0,j=0,b[j++]=i;a[i];i++)
{

 if(a[i]=='\n')
 {
 
     po=i+1;
     b[j++]= po;
     
 
 }

}

b[j]=-1;

scanf("%d",&n);

for(i=0,i=b[n-1];a[i]!='\n' && a[i]; i++)
{

    putchar(a[i]);

}

}
