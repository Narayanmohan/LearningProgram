/*Program No-p146.c
dt 10-16-2Loop
Concept - For Loop
CONCEPT - INTRODUCED AN ARRAY IN THE FOR LOOP
Next Program -Read and Display 10 numbers using an array
---------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int a[10];

int i;

for(i=0;i<10;i++)
{

    scanf("%d",&a[i]);

}

for(i=0;i<10;i++)
{
    printf("%d",a[i]);
}


}

