/*Program No-P177.c
dt-11-9-2021
Concept-Char Array
Loop-For Loop
Next Program-Read text until '$' is given and copy 'N' th characters from the 'm'th Position
---------------------------------------------------------------------------------------------------------
Example:

Input -> I LOVE INDIA
n -> 7
m -> 3

output -> LOVE IN

----------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j,mpos,nthcha,limit;

char a[100];
char b[100];


for(i=0;(a[i]=getchar())!='$';i++);

a[i]='\0';


scanf("%d",&mpos);
scanf("%d",&nthcha);

limit = nthcha + mpos;

for(i=mpos,j=0;i<limit;i++,j++)
{
    
    b[j]=a[i];    

}

b[j]='\0';

for(j=0;b[j];j++)
{

    putchar(b[j]);
    
}


}



