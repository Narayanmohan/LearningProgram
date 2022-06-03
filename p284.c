/* program No-p284.b
dt -6-2-2022
Concept-Function
Next Program-Read text until '$' is givn and Copy Nth characters from the mth Position
-------------------------------------------------------------------------------------------*/
#include<stdio.h>

int mpos,nthcha,limit;

void read(char a[100]);

void copy(char a[100],char b[100],int nthcha,int mpos);

void display(char c[100]);

int main()
{

char a[100];
char b[100];

scanf("%d",&mpos);

scanf("%d",&nthcha);


read(a);

copy(a,b,mpos,nthcha);

display(b);


}


void read(char a[])
{
    int i;
    
    for(i=0;(a[i]=getchar())!='$';i++);

    a[i]='\0';

}

void copy(char a[],char b[],int nthcha,int mpos)
{

    int limit,j,k;

    limit=nthcha+mpos;

    for(j=mpos,k=0;j<limit;j++,k++)
    {

    b[k]=a[j];

    }

}


void display(char c[])
{

int n;

    for(n=0;c[n]!='\0';n++)
    {

    putchar(c[n]);

    }

}





