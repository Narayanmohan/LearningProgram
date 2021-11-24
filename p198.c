/*Program No-p198.c
dt-11-24-2021
Concept-Structure
Next program-Find the Area of circle using struct
-----------------------------------------------------------------*/
#include<stdio.h>
int main()
{

 struct areaofcircle
 {
     float area;
     int r;
        
 }aoc;
 
 
 
 
 
 scanf("%d",&aoc.r);
 
 aoc.area = 3.14*aoc.r*aoc.r;
 
 
 printf("%f",aoc.area);


}

