/*Program No-P391.c
dt-11-23-2022
Concept-Malloc with Function Pointers
Concept-Display the Biggest in Main Function
Next Program-Biggest of 3 numbers using function pointers with Malloc and Display the Biggest in the Main Function
----------------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>
typedef struct big3num
{

    int a, b,c,t,big3;

}big3;

void read(big3 *b3);
void displaybig3(big3 *b3);

int main()
{

    big3 *b3;
    
    b3=(big3 *)malloc(sizeof(big3));
    
    read(b3);
    displaybig3(b3);
    
    printf("Biggest of 3 Number is = %d \n",b3->big3);
    free(b3);

}

void read(big3 *b3)
{
    scanf("%d",&b3->a);
    scanf("%d",&b3->b);
    scanf("%d",&b3->c);
}

void displaybig3(big3 *b3)
{

    b3->t= b3->a > b3->b? b3->a:b3->b;
    
    b3->big3=b3->t >b3->c ?b3->t:b3->c;


}

