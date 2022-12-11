/*Program No-P412.cpp
dt-12-11-2022
Language-c++
Concept-Typedef with c++
Next Program- Read and Display a biodata using Typedef using c++
--------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;

typedef struct biodata
{
    char name[100];
    int age;
    float salary;

}Bio;

void read(Bio *b);
void display(Bio *b);

int main()
{        
    Bio b;
    
        read(&b);
        display(&b);

}

void read(Bio *b)
{
    
    cin>>b->name>>b->age>>b->salary;

}

void display(Bio *b)
{

    cout<<'\n'<<b->name<<'\n'<<b->age<<'\n'<<b->salary;
}