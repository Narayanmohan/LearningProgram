/*Program No-P392.c
dt-11-25-2022
Concept-Malloc with Function Pointers
Next Program-Sum of Two Numbers using Malloc with Function Pointers
-----------------------------------------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>
typedef struct sumoftwonum
{
    int a,b,c;

}sumtwo;

void read(sumtwo *s2);
void calculate(sumtwo *s2);

int main()
{

    sumtwo *s2;

    s2=(sumtwo *)malloc(sizeof(sumtwo));
    
    read(s2);

    calculate(s2);    
    
    printf("Sum of Two Number is = %d\n",s2->c);
    
free(s2);       

}

void read(sumtwo *s2)
{

 //   printf("Anand");

    scanf("%d",&s2->a);
         
    scanf("%d",&s2->b);

}


void calculate(sumtwo *s2)
{

  s2->c = s2->a + s2->b;
  
}


