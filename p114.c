/*program No- p114.c
dt-8-29-2021
Concept:Char Array
Next Program: Read text unitl '$' is given and copy the last 'N' th characters 
--------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
 int i,j,ctr,num;
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
ctr=0;

while(a[i]!= '\0')
{

    ctr = ctr+ i;
    i++;


}



i=0;
j=0;
scanf("%d",&num);

i= num;

while(i<=ctr)
{

    b[j] = a[i];
    
    i++;
    j++; 


}

b[j]!='\0';

j=0;
while(b[j]!='\0')
{

printf("%c",b[j]);
j++;

}


}