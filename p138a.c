/*Program No- p138a.c
dt-10-15-2021
Loop - For Loop
Next Program-Read and Print the numbers until -1000 is given
Concept- Using scanf function inside the for loop
-----------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int num;

    for(scanf("%d",&num); num!=-1000; scanf("%d",&num))
    {

        printf("%d",num);

    }


}
