/*Program No-P400.cpp
dt-11-30-2022
Language-c++
Next Program-Area of circle using function
---------------------------------------------------*/
#include<iostream>
using namespace std;
void read(float *r);
float circle (float r);
void print(float c);
main()
{

    float r,c,result,q;
    read(&r);
    result = circle(r);
    print(result);

}
void read(float *r)
{
    
    cin>>*r;   

}

float circle(float r)
{

    float s;
    
    s = 3.14 * r * r;
    
    return s;

}

void print(float c)
{
    
    cout<<"Area of Circle =" << c;
}

