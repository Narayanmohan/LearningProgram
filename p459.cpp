/*Program No-P459.cpp
dt-2-5-2023
Concept-FileHandling
Next Program-Read Biodata from keyboard and Write to a File until Name[0]!=$ using Command Line Argument
----------------------------------------------------------------------------------------------------------*/
int main()
{

    char name[100];
    int age;
    float salary;
    
        ofstream bio(argv[1]);
        
            if(argc<2)
            {
                
                cout<<"Invalid Argument";
                
            }
            
            if(bio.fail())
            {
                cout<<"File Opening Error";
            
            }
                        
            cin>>name;
            
                while(name[0]!='$')
                {
                
                    cin>>age>>salary;
                    
                        bio<<name<<age<<salary;
                        
                            cin>>name;
               }

bio.close();

}