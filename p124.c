/*program No- p124.c
dt-9-2-2021
Concept: Char Array
Next Program: Print Starting Position of each line
------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j,po;

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

b[j]=i;


while(a[i]!='\0')
{

         if(a[i]=='\n')
         {
 
          i++;
          po=i;
          b[j]= po;
          j++;
 
         }
        else
         { 
         i++;
         }

}

b[j] = -1;

while(b[j]!=-1)
{

  printf("%d",b[j]);
  j++;
    
}

}