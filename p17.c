/* program p17.c
dt-4-14-2021
using if control structure
Given integer number is negative or not*/

#include<stdio.h>
int main()
{

    int num;
    scanf("%d",&num);
    
    if(num<0)
    
        printf("Given number is Negative number = %d ", num);
        
    else
    
        printf("Given number is Not a Negative number = %d ",num);



}