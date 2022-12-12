/*Program No-P413.cpp
dt-12-11-2022
Language-c++
Concept-Return Type as Bio
Next Program-Read and Display a biodata using typedef with Return Type as BIO
-----------------------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;

typedef struct biodata
{
    char name[100];
    int age;
    float salary;

}Bio;


    Bio read(Bio *b);
    Bio display(Bio *b);
    
int main()
{
    Bio b;
   
    read(&b);
    
    display(&b);
}    

Bio read(Bio *b)
{

    cin>>b->name>>b->age>>b->salary;


}    
    
    
Bio display(Bio *b)
{

    cout<<'\n'<<b->name<<'\n'<<b->age<<'\n'<<b->salary<<'\n';

}    