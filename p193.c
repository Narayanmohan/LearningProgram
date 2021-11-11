/*Program No-p193.c
dt-11-10-2021
Concept-Char Array
Loop - For Loop
Next Program-Replace the pattern
-----------------------------------------------------------------------------------------------------
Example:
             0 1 2 3 4 5 6 7 8 9 10 11 12  
Input  a ->  I   L O V E   A P P L  E '\0'


b- > APPLE '\0'

c-> ORANGE'\0'

d->I LOVE ORANGE
-----------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j,k,l,m,n;

char a[100];
char b[100];
char c[100];
char d[100];


for(i=0;(a[i]=getchar())!='$';i++);

a[i]='\0';


for(j=0;(b[j]=getchar())!='$';j++);

b[j]='\0';


for(k=0;(c[k]=getchar())!='$';k++);

c[k]='\0';

for(i=0,l=0;a[i];)
{

    for(n=i,j=0;a[n]==b[j] && b[j]!='\0'; n++,j++);
    
        if(b[j]=='\0')
        {
        
            for(i=n,m=0;c[m]!='\0';m++,l++)
            {
            
                d[l]=c[m];
            }
            
        }
        else
        {
            
            d[l]=a[i];        
            l++;
            i++;
        
        }

}


d[l]='\0';

for(l=0;d[l];l++)
{

    putchar(d[l]);
}


}
