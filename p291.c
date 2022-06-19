/*Program No-p291.c
dt-6-19-2022
Concept -Function
Next Program-Read text until $ is given and Delete Comma
--------------------------------------------------------------------------*/
#include<stdio.h>
void read(char a[100]);
void deletecomma(char a[100],char b[100]);
void display(char b[100]);
int main()
{
   char a[100];

   char b[100];

   read(a);

   deletecomma(a,b);

   display(b);

}   

void read(char a[])
{

   int i;
   
   for(i=0;(a[i]=getchar())!='$';i++);
   
   a[i]='\0';

}

void deletecomma(char a[],char b[])
{

   int i,j;
   
   for(i=0,j=0;a[i];i++)
   {
   
   
      if(a[i]==',')
      {
         
         continue;
      
      }
      
      else
      {
      
         b[j]=a[i];
         
         j++;
     
      }
   
   }

b[j]='\0';

}

void display(char b[])
{

   int j;

   for(j=0;b[j];j++)
   {

      putchar(b[j]);
   
   }

}