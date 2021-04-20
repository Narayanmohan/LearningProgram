/*program p15.c
dt - 4-14-2021
Fahrenheit to celcious using scanf function
(5.0/9.0)*(f-32)   */

#include<stdio.h>
int main()
{
   
   int f;
   float Fartocel;
   
   scanf("%d",&f);
   
   Fartocel = (5.0/9.0)*(f-32);
   
   printf("Fahrenheit to celcious = %f ", Fartocel); 


}
