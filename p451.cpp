/*Program No-P451.cpp
dt-1-24-2023
Language-c++
Next Program-Difference of two complex Numbers
------------------------------------------------------------*/
#include<iostream>
using namespace std;
class diffcomplex
{
    private:
    
        int x, y;
        
    public:
        void read();
        diffcomplex diff(diffcomplex c);
        void display(diffcomplex c);
};

void diffcomplex::read()
{
    cin>>x>>y;
}

diffcomplex diffcomplex::diff(diffcomplex c)
{
    
    diffcomplex temp;
    
    temp.x=this->x - c.x;
    temp.y=this->y - c.y;

return temp;
    
}

void diffcomplex::display(diffcomplex c)
{

    cout<<c.x<<"+i"<<c.y;

}

int main()
{

    diffcomplex c1,c2,diff;
    c1.read();
    c2.read();	


    diff = c1.diff(c2);
    c1.display(diff);

}



