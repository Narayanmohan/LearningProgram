/* Program No- p128.c
dt-9-29-2021
Concept:Looping While
Next Program-> Count the  number of time the given pattern is exists.
-----------------------------------------------------------------------------
Note:

After the last room of an array , there is no value that is why we put '\0'
----------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i ,j,k, count;

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

j=0;

scanf("%c",&b[j]);

while(b[j]!='$')
{

j++;

scanf("%c",&b[j]);

}

b[j]='\0';

i=0;

count=0;

while(a[i]!='\0')
{


  k=i;

  j=0;


while(a[k]==b[j] && b[j]!='\0')
{
    k++;

    j++;


}

if(b[j]=='\0')
{
    
    count = count +1;

}

i++;
}

printf("The number of times the pattern exist = %d ",count);

}
