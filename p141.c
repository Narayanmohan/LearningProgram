/*Program No- p141.c
dt-10-15-2021
Loop-For Loop
Next Program-Find the sum of Positive, Negative number until -1000 is given
--------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int num, sumpos,sumneg;

sumpos =0;
sumneg =0;

scanf("%d",&num);

for(; num!=-1000 ;)
{


if(num >0)
{
    
    sumpos = sumpos+ num;

}
else if (num <0)
{

    sumneg = sumneg +num;

}    
else
{

    printf("Not a vaild number");

}

scanf("%d",&num);


}

printf("%d%d",sumpos,sumneg);





}