/*Program No-P437.cpp
dt-1-2-2023
Concept-this keyword in constructor
Concept-Construtor OverLoading
Next Program-Biggest of 3 numbers using this keyword with Constructor OverLoading
--------------------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
class Big3
{

    private:
        
        int num1,num2,num3,result;

    public:
    
        Big3()
        {
            num1=1;
            num2=2;
            num3=17;
             
        }        

        Big3(int num1)
        {

            this->num1=num1;        
            num2=5;
            num3=7;
        
        }
        Big3(int num1,int num2,int num3)
        {
        
            this->num1=num1;
            this->num2=num2;
            this->num3=num3;
        
        }
        
        Big3(int num1,int num2)
        {
        
            this->num1=num1;
            this->num2=num2;
            num3=17000;
            
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
    cout<<"value of num1="<<num1<<"value of num2="<<num2<<"value of num3="<<num3<<'\n';

    cout<<"Biggest of 3 Number="<<result<<'\n';
    
        
}


int main()
{

    Big3 obj;
    obj.biggestof3();
    obj.displaybig3();
    
    
        int x,y,z;
        cin>>x>>y>>z;
        
            Big3 obj2(x,y,z);
            obj2.biggestof3();
            obj2.displaybig3();
            
                int m,n;
                cin>>m>>n;
                
                    Big3 obj3(m,n);
                    obj3.biggestof3();
                    obj3.displaybig3();
                    
                    
                        int k;
                        cin>>k;
                        
                            Big3 obj4(k);
                            obj4.biggestof3();
                            obj4.displaybig3();
                            
}

