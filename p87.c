/* Program No p87.c
dt-8-14-2021
Concept: ARRAY
Next Program : Biggest of 10 Numbers using an Array 
--------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,a[10],c;


c=a[0];
i=0;
while(i<10)
{

scanf("%d",&a[i]);
i++;

}
 
i=0;
while(i<10)
{

    if(c<a[i])
    {
    
     c= a[i];
     i++;
    
    }
    else
     
        i++;
     

}

printf("%d",c);


}
