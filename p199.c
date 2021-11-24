/*Program No-p199.c
dt-11-24-2021
Concept-Structure
Next Program-Find the biggest of three numbers using struct
--------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

struct biggestofthree
{

 int a, b,c;

};

struct biggestofthree bigthree;

scanf("%d%d%d",&bigthree.a,&bigthree.b,&bigthree.c);


if(bigthree.a > bigthree.b)
if(bigthree.a > bigthree.c)

printf("biggestofthree = %d",bigthree.a);
else
printf("biggestofthree = %d",bigthree.c);

   else if(bigthree.b>bigthree.c)
    {
      printf("biggestofthree =%d",bigthree.b);

    }
    else
    {

     printf("biggestofthree=%d",bigthree.c);
   
   }

}