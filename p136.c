/*program No-p136.c
dt-10-15-2021
Concept:For Loop
Next Program-print the numbers between two limits and Find the number is Even or Odd
---------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j, firstlimit,secondlimit;

scanf("%d",&firstlimit);
scanf("%d",&secondlimit);

for(i=firstlimit; i<=secondlimit;i++)
{

 if(i%2==0)
 {
 printf("\nEven No = %d",i);
 }

else
{
    printf("\nOdd Number =  %d",i);
}

}


}