/*Program No-P419.cpp
dt-12-12-2022
Language -c++
Concept-PRIVATE Access Modifiers
Next Program-Read and Display biodata using PRIVATE Access Modifiers using c++
--------------------------------------------------------------------------------------------------------------------------
Note:

    Access Modifier - PRIVATE
            
             Private: The class members declared as private can be accessed only by the member functions inside the class. 
             They are not allowed to be accessed directly by any object or function outside the class. 
             Only the member functions or the friend functions are allowed to access the private data members of the class. 

--------------------------------------------------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;

typedef struct biodata
{

    private:
    
        char name[100];
        int age;
        float salary;
        
   
    public:
    
        void read();
        void display();     

}Bio;

void Bio::read()
{
  
   cin>>name>>age>>salary;
  
}

void Bio::display()
{
 
  cout<<'\n'<<"Read and Display a Biodata"<<'\n'<<name<<'\n'<<age<<'\n'<<salary<<'\n';

}

int main()
{
  Bio b;
  
  b.read();
  b.display();

}

