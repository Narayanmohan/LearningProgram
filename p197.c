/*program No-p197.c
dt-11-23-2021
Concept-Structure/Struct
Next Program-Read and Display the Bio-Data(name, age ,salary)using struct
---------------------------------------------------------------------------------------
Meaning:
    Structure is a collection of one or more variables of different data type. It can be
accessed from single Name.


Struct Struct_Name
{
    
    variable name;

}
  __ Keyword     _Structurename
  |              |
  |              |
struct Structure_tag
{
    // member variable 1
    // member vairable 2


}[struture_variable];

----------------------------------------------------------------------------------------
First Example
---------------


   struct biodata
   {
       char name[100];
       int aga;
       float salary;
   
   }bio;
   
   
  scanf("%d",&bio.name);
  scanf("%d",&bio.age);
  scanf("%f",&bio.salary);
  
printf("%s%d%f",bio.name,bio.age,big.salary);

-------------------------------------------------------------------------------------------
                or
Second Example
----------------

struct biodata
{

     char name[100];
     int age;
     float salary;
    


};

struct biodata bio;


----------------------------------------------------------------------------------------------

struct address
{
    
    char street[100];
    char state[100];
    char country[100];
    int pincode;

};
street address Addrs;
---------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    struct biodata
    {
    
        char name[100];
        int age;
        float salary;
            
    }bio;
        
    scanf("%s",bio.name);
    
    scanf("%d",&bio.age);
    
    scanf("%f",&bio.salary);
    
    
    printf("Name:%s\n",bio.name);
    printf("Age:%d\n",bio.age);
    printf("Salary:%f\n",bio.salary);
    
    

}






                
 
    
             