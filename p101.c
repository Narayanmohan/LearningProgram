#include<stdio.h>
int main()
{
int i;
char a[100];

i=-1;

while(a[i]!='$')
{

i++;
scanf("%c",&a[i]);

}
printf("%d",i);

}



