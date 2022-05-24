/*Program No-p279.c
dt-5-22-2022
Concept-Function
Next Program-Read and Display text until $ is given
-------------------------------------------------------*/
#include<stdio.h>
void readtext(char a[]);
void Display(char b[]);
int main()
{
 
    char a[100];

    readtext(a);

    Display(a);

}

void readtext(char a[100])
{

    int i;
    

    for(i=0;(a[i]=getchar())!='$';i++);
 

    a[i]='\0';
      

}


void Display(char b[100])
{


   int j;
   
  for(j=0;b[j]; j++)
  { 
   
       putchar(b[j]);
  }
   

}