/*Program No-P414.cpp
dt-12-12-2022
Concept-Typedef with Return Type-Area
Concept-Method which has the typedef keyword as the return type.
Next Program-Area of circle using typedef with return type as area
-----------------------------------------------------------------------------*/
#include<iostream>
using namespace std;

typedef struct areaofcircle
{

    float area;
    int r;
}aoc;        

aoc read(aoc *acir);
aoc calculate(aoc *acir);
aoc display(aoc *acir);

int main()
{

    aoc acir;
    
    read(&acir);
    calculate(&acir);
    display(&acir);


}

aoc read(aoc *acir)
{
    cin>>acir->r;

}

aoc calculate(aoc *acir)
{

    acir->area = 3.14 * acir->r * acir->r;

}

aoc display(aoc *acir)
{
    cout<<acir->area;

}




