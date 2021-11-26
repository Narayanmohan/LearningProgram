/*Program No-p212.c
dt-11-26-2021
Concept-Typedef with Structure
Next Program-Find the distance between two points
-----------------------------------------------------------------------------*/
#include<stdio.h>
#include<math.h>
int main()
{

    typedef struct distance
    {
       
        float x1,y1,x2,y2,distance;
    
    }DISTANCE
        
    DISTANCE dt;
        
            scanf("%f%f",&dt.x1,&dt.y1);

            scanf("%f%f",&dt.x2,&dt.y2);
            
    dt.distance = sqrt((dt.x2-dt.x1)*(dt.x2-dt.x1)+(dt.y2-dt.y1)*(dt.y2-dt.y1));
    
    
    printf("Distance between (%f%f) and (%f%f) is %f\n",dt.x1,dt.y1,dt.x2,dt.y2,dt.distance);



}