/* program p12.c
dt 4-14-2021
Volume of sphere using scanf function
4.0/3.0*3.14*r*r*r */


#include<stdio.h>
int main()
{

float volumeofsphere;

int r;

scanf("%d",&r);

volumeofsphere = (4.0/3.0)*3.14*r*r*r;


printf("Volume of sphere is = %f " , volumeofsphere);



}