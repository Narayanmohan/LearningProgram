/* Program No - p115.c
dt-8-30-2021
Concept: Char Array
Next Program: Read Text Until '$' is given and copy 'N' th characters from the 'm' th position
---------------------------------------------------------------------------------------------------------
Example:

Input => I Love India

N=> 7
M=> 2

B=> Love In

----------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i, j,mpos,nthcha,ctr;

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

j=0;

ctr=1;


scanf("%d",&mpos);

scanf("%d" &nthcha);

i= mpos;

while(ctr<=nthcha)
{
b[j] = a[i];
i= i+1;
ctr = ctr+1;
j+j+1;

}


b[j]!='\0';

j=0;

while(b[j]!='\0')
{

    printf("%c", b[j]);
    j++;

}


}