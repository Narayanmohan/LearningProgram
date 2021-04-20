/* program p13.c
dt - 4-14-2021
volume of cylinder using scanf function
3.14*r*r*h  */


#include<stdio.h>
int main()
{

float volofcyl;
int r;
int h;

scanf("%d%d",&r,&h);

volofcyl = 3.14*r*r*h;


printf("volume of cylinder is = %f ",volofcyl);




}