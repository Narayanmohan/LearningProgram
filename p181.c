/*Program No- p181.c
dt-10-29-2021
Loop Concept- For Loop
Array Concept- Char Array
Next Program-Read text until '$' is given and Delete comma 
---------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j;

char a[100];
char b[100];


for(i=0;(a[i]=getchar())!='$'; i++);

a[i]='\0';

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

  for(j=0;b[j];j++)
  {

         putchar(b[j]);

   }

}