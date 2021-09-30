/*Program No- p130.c
dt-9-29-2021
Concept- Looping while
Next Program - Replace the given pattern
-----------------------------------------------------
Example:


Input a -> I  l o v e   a p p l e '\0'

Input b -> A p p l e '\0'

Input c - > O r a n g e '\0'

Output d -> I  l o v e   O r a n g e  

-----------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j,k,l,m,n;

char a[100];
char b[100];
char c[100];
char d[100];




i=0;

scanf("%c",&a[i]);

while(a[i]!='$')
{

 i++;
 
 scanf("%c",&a[i]);


}

a[i] = '\0';

j=0;

scanf("%c",&b[j]);

while(b[j]!= '$')
{

j++;

scanf("%c",&b[j]);

}

b[j] = '\0';

k=0;

scanf("%c",&c[k]);

while(c[k]!='$')
{

 k++;

scanf("%c",&c[k]);

}

c[k] = '\0';

i=0;

l=0;

while(a[i]!='\0')
{

n=i;

j=0;


while(a[n]==b[j] && b[j]!='\0')
{

n++;
j++;

}


if(b[j]=='\0')
{

i=n;

m=0;

   while(c[m]!='\0')
   {

   d[l] = c[m];
   m++;
   l++;

   }
}

else
{

 d[l] = a[i];
 i++;
 l++;

}

}

d[l] = '\0';

l=0;

while(d[l]!='\0')
{

printf("%c",d[l]);

l++;

}

}
























 