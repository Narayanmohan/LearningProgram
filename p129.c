/*Program No-p129.c
dt-9-29-2021
Concept- Looping while
Next Program-Delete the given Pattern
---------------------------------------------------------
Example:

          0 1  2 3  4  5 6 7  8  9 10  11  12
                    
Input -> [I] [L][O][V][E] [I][N][D][I][A]['\0']

          0  1  2  3   4
Input -> [L][O][V][E]['\0']


Output ->I_ _ India

Note :1

_ -> Means Space

Note :2

'\0' -> End of an Array
------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j,k,l;

char a[100];

char b[100];

char c[100];


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

l=0;

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
    i=k;
}
else
{
c[l] = a[i];
l++;
i++;
}

}

c[l] = '\0';

l=0;

while(c[l]!='\0')
{

printf("%c",c[l]);

l++;

}


}








