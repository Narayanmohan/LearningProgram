/*Program No-P422.cpp
dt-12-13-2022
NewConcept-CLASS
Next Program-Read and Display Biodata using CLASS
-------------------------------------------------------------------
Note:

    C++ Classes and Objects

Class: A class in C++ is the building block that leads to Object-Oriented programming. It is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A C++ class is like a blueprint for an object. For Example: Consider the Class of Cars. There may be many cars with different names and brand but all of them will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range etc. So here, Car is the class and wheels, speed limits, mileage are their properties

•	A Class is a user defined data-type which has data members and member functions.
•	Data members are the data variables and member functions are the functions used to manipulate these variables and together these data members and member functions defines the properties and behavior of the objects in a Class.
•	In the above example of class Car, the data member will be speed limit, mileage etc and member functions can be apply brakes, increase speed etc.

An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.

Defining Class and Declaring Objects
A class is defined in C++ using keyword class followed by the name of class. The body of class is defined inside the curly brackets and terminated by a semicolon at the end.


class ClassName  // class is a keyword and ClassName is User-Defined Name.
{

    Access Specifier  // can be private, public or protected    

    Data Members //variables to be used.
    
    Member Functions(){}  //Methods to access data members.


} //Class name ends with a semicolon.

Objects: When a class is defined, only the specification for the object is defined; no memory or storage is allocated.
To use the data and access functions defined in the class, you need to create objects. Syntax:

    ClassName ObjectName;

Accessing data members and member functions: The data members and member functions of class can be accessed using the dot(‘.’) operator with the object. For example if the name of object is obj and you want to access the member function with the name printName() then you will have to write obj.printName() .

Accessing Data Members
The public data members are also accessed in the same way given however the private data members are not allowed to be accessed directly by the object. Accessing a data member depends solely on the access control of that data member. This access control is given by Access modifiers in C++.
There are three access modifiers : public, private and protected. 

Objects are stored in HEAP Memory

varibles are stored in STACK

                                        Member Functions in Classes
                                     --------------------------------
There are 2 ways to define a member function:

Inside class definition
Outside class definition
To define a member function outside the class definition we have to use the scope resolution :: operator along with class name and function name. 

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;

class Biodata
{

    private: //Access Specifier
    
        char name[100]; // DataMembers =Field = Attribute
        int age;
        float salary;
        
    public: //Access Specifier
    
        void read();      // Member Function & read is not defined inside class definition
        void display();  // Member Function &  display is not defined inside class definition

        
};        
        
void Biodata::read()  //To define a member function outside the class definition we have to use the scope resolution :: operator along with class name and function name. 
{

    cin>>name>>age>>salary;
}    

void Biodata::display() //To define a member function outside the class definition we have to use the scope resolution :: operator along with class name and function name.  
{

    cout<<"Biodata"<<'\n'<<name<<'\n'<<age<<'\n'<<salary<<'\n';
}

int main()
{

    Biodata b; // Declare an object of class Biodata
    
    b.read();  // Accessing Member Function.
    
    b.display(); // Accessing Member Function.

}




