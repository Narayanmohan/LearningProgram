/*Program No-P441.cpp
dt-1-9-2023
Concept-Without using Inheritance
Next Program-Read and Display a person's Biodata without using inheritance
-------------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
class person
{

    private:
        char name[100];
        int age;
        char gen[100];
        char address[100];
        

   public:
       void read();
       void display();

};

void person::read()
{
    cin>>name>>age>>gen>>address;

}

void person::display()
{

    cout<<name<<age<<gen<<address;
}

int main()
{

    person pe;
    pe.read();
    pe.display();

}