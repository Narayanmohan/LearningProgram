/*Program No-P369.c
dt-10-18-2022
Concept-Typedef-Structure concept with Function Pointers
Next Program-Biggest of 3 Numbers using Typedef with Function Pointers
---------------------------------------------------------------------------------*/
#include<stdio.h>
typedef struct Bigof3Num
{

    int a,b,c,t, big3;
    
}big3ter;

void read(big3ter *b3);
void display(big3ter *b3);
int main()
{

    big3ter b3;
    
    read(&b3);
    
    display(&b3);

}

void read(big3ter *b3)
{

    scanf("%d%d%d",&(*b3).a,&(*b3).b,&(*b3).c);
    

}
void display(big3ter *b3)
{

    (*b3).t = (*b3).a > (*b3).b ? (*b3).a:(*b3).b;
    
    (*b3).big3 = (*b3).t > (*b3).c ? (*b3).t:(*b3).c;
    
    printf("Biggest of 3 Numbers is =%d",(*b3).big3);



}
