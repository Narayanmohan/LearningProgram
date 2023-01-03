/*Program No-P435.cpp
DT-1-2-2023
Concept-ConstructorOverLoading
Next Program-Biggest of 3 numbers using constructor OverLoading
------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
class Big3
{

    private:
        int num1,num2,num3,result;
    
    public:
        Big3(int a ,int b, int c)
        {
        
            num1=a;
            num2=b;
            num3=c;        
        
        }
        Big3(int a,int b)


        {
        
            num1=a;
            num2=b;
            num3=107;               
        }
        
        Big3(int a)
        {
        
          num1=a;
          num2=4;
          num3=193;  
        
        }
        Big3()
        {
            num1=1;
            num2=2;
            num3=11;       
        
        }
        
void biggestof3();
void displaybig3();
};


void Big3::biggestof3()
{

    int s;
    
    s=num1>num2?num1:num2;
    result=s>num3?s:num3;

}

void Big3::displaybig3()
{
    cout<<"Biggest of 3 Number="<<result;
}

int main()
{

    Big3 obj;
    obj.biggestof3();
    obj.displaybig3();


    int x,y,z;
    cin>>x>>y>>z;
    
        Big3 obj1(x,y,z);
        obj1.biggestof3();
        obj1.displaybig3();

        int m,n;
        cin>>m>>n;
        
            Big3 obj2(m,n);
            obj2.biggestof3();
            obj2.displaybig3();

                int k;
                cin>>k;
                    
                    Big3 obj3(k);
                    obj3.biggestof3();
                    obj3.displaybig3();

}
