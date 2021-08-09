#include<stdio.h>
int main()
{
int i;
char a[100];

i=0;
scanf("%c",&a[i]);
while(a[i]!='$')
{

i++;
scanf("%c",&a[i]);


}

i=0;
while(a[i]!='$')
{
 printf("%c",a[i]);
 i++;

}


}



