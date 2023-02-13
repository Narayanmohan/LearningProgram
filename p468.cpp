/*Program No-P468.cpp
dt-2-12-2023
Concept-FileHandling with Class
Next Program-Read from the file and Edit the Nth Record
--------------------------------------------------------------------*/
#include<fstream>
#include<iostream>
using namespace std;
class person
{

    private:
        char name[100];
        int age;
        float salary;

    public:
        void display();
        void read();

};

void person::display()
{
    cout<<name<<age<<salary;

}

void person::read()
{

    cin>>name>>age>>salary;
}

int main(int argc, char *argv[])
{

    fstream bio;
    
    bio.open(argv[1],ios::in|ios::out);
    
        if(argc<2)
        {
            cout<<"invalid Argument";
            return 0;
                    
        }
        
        if(bio.fail())
        {
            cout<<"File Opening Error";
            return 0;
        
        }

person p;

int ln,n;

cin>>n;

ln=(n-1)*sizeof(p);

bio.seekg(ln);

bio.read((char *)&p,sizeof(p));

p.display();
p.read();
bio.seekg(ln);

bio.write((char *)&p,sizeof(p));

bio.close();
}





