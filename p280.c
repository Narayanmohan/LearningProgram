/*
Program No-p280.c
dt-5-24-2022
Concept-Function
Next Program-Count the number of upper/lower/single digit and special characters
------------------------------------------------------------------------------------------*/
#include<stdio.h>
void read(char a[100]);

void count(char  b[100]);

int cu,cl,csd,csp;

int main()
{

char a[100];

read(a);

count(a);


printf("uppercase= %d lowercase=%d\n singledigit=%d\n specialcharacter=%d\n", cu,cl,csd,csp);

}

void read(char a[100])
{
    int i;
    
    for(i=0;(a[i]=getchar())!='$';i++);
    
    a[i]='\0';
    

}

void count(char b[100])
{

int j;

 

for(j=0;b[j];j++)
{

    if(b[j]>=65 && b[j]<=90)
    {
        cu=cu+1;
    
    }

    else if(b[j]>=97 && b[j]<=122)
    {
        cl=cl+1;
    
    }

    else if(b[j]>=48 && b[j]<=57)
    {
    
        csd= csd+1;
    }

    else
    {
        csp=csp+1;
    
    }

}


}
