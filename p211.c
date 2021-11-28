/*program No-p211.c
dt-11-26-2021
Concept-Typedef with Structure
Next Program-Read and Display X,Y Co-ordinates of a point
--------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

 typedef struct point
 {
 
     int x;
     int y;
 
 }POINT;
 
 POINT pnt;
 

 
 scanf("%d%d",&pnt.x,&pnt.y);
 
 printf("X Co-ordinates = %d,Y Co-ordinates = %d",pnt.x,pnt.y);


}