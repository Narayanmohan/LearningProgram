/*program No- p114.c
dt-8-29-2021
Concept:Char Array
Next Program: Read text until '$' is given and copy the last 'N' th characters 
-----------------------------------------------------------------------------------
NOTE:

 Example-Input ANAND$
 
 LAST N character input ->4
 
 output should be =>NAND
 
cc p114.c
./a.out p114.c

ANAND$

4

output =>NAND
-----------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

 int i,j,ctr,num,k;
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

ctr=0;

while(a[i]!='\0')
{

    ctr = ctr+ 1;

    i++;

}

k=0;

j=0;

scanf("%d",&num);

k=(ctr-num);

while(k<ctr)
{

    b[j] = a[k];
    
    k++;
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