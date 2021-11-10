/*Program No-p183.c
dt-11-9-2021
Concept- Char Array
Loop- For Loop
Next Program-Read two Text until '$' is given and Merge two texts
-----------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
int i,j,k;

char a[100];
char b[100];
char c[100];


for(i=0;(a[i]=getchar())!='$';i++);

a[i]='\0';

for(j=0;(b[j]=getchar())!='$';j++);

b[j]='\0';

for(i=0,k=0;a[i];i++,k++)
{

    c[k]=a[i];


}
for(j=0;b[j];j++,k++)
{

    c[k]=b[j];


}

c[k]='\0';

for(k=0;c[k];k++)
{

    putchar(c[k]);
       
}

}
