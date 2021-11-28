/*Program No-p212.c
dt-11-26-2021
Concept-Typedef with Structure
Next Program-Find the distance between two points
-----------------------------------------------------------------------------*/
#include <stdio.h>

#include <math.h>

int main()
{

    typedef struct point
    {
       
        float x,y;
    
    }POINT;
        
    POINT p1,p2;
        
    float distance;    
        
        
            scanf("%f%f",&p1.x,&p1.y);

            scanf("%f%f",&p2.x,&p2.y);
            
    distance = sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
    
    
    printf("Distance between (%f%f) and (%f%f) is %f\n",p2.x,p1.x,p2.y,p1.y,distance);



}