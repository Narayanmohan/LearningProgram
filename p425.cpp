/*Program No-P425.cpp
dt-12-13-2022
Concept-Class
Next Program-Read Number until -1000 is given and Perform the following Operations
-Read()
-Display()
-Find the Biggest Number in the Array()
-Find the Smallest Number in the Array()
-Find the Position of Biggest in the Array()
-Find the Position of Smallest in the Array()
-Swap Biggest and Smallest number in the Array()
-Find the Sum in the Array()
----------------------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;

class Multipleop
{
    private:
    
            int a[100];
    
    public:
        
            void read();
            void display();
            int biggest();
            int smallest();
            int posbig();
            int possmall();
            void swapbigandsmall();
            int sum();

};
    
void Multipleop::read()
{
    int i;
    
        i=0;
      
        cin>>a[i];
        
        for(;a[i]!=-1000;)
        {
            i++;
            cin>>a[i];
            
        
        }

}    


void Multipleop::display()
{

    int i;
    
        for(i=0;a[i]!=-1000;i++)
        {
        
            cout<<a[i];
        }



}

int Multipleop::biggest()
{

    int j,Big;
    
    Big =a[0];
    
        for(j=0;a[j]!=-1000;j++)
        {
        
            if(Big < a[j])
            {
            
                Big = a[j];
            }
        
        }


return Big;
}          

int Multipleop::smallest()
{
    
    int j,smallest;
    
    smallest = a[0];
    
        for(j=0;a[j]!=-1000;j++)
        {
            if(smallest >a[j])
            {
            
                smallest =a[j];
            
            }
        
        }

return smallest;

}

int Multipleop::posbig()
{

    int j,BiggestposinArray,v;
    
        v=a[0];
        
        BiggestposinArray = 0;
        
        
            for(j=0;a[j]!=-1000;j++)
            {
                if(v < a[j])
                {
                
                    v=a[j];
                    
                    BiggestposinArray =j;
                }
            
            }


return BiggestposinArray;
}                       

int Multipleop::possmall()
{

    int j, smallestposinArray,v;
    
        v= a[0];
        
        smallestposinArray = 0;
        
            for(j=0;a[j]!=-1000;j++)
            {
            
                if(v>a[j])
                {
                
                    v=a[j];
                    smallestposinArray=j;
                }
            
            }

return smallestposinArray;
}                               

void Multipleop::swapbigandsmall()
{

    int BiggestposinArray;
    int smallestposinArray;
    int swap;
    
        BiggestposinArray = posbig();
        smallestposinArray = possmall();
        
            swap = a[BiggestposinArray];
            a[BiggestposinArray] = a[smallestposinArray];
            a[smallestposinArray]= swap;
    
}

int Multipleop::sum()
{

    int i, Arraysum;
    i=0;
    Arraysum=0;
    
              
        
        for(i=0;a[i]!=-1000;i++)
        {
        
            Arraysum=Arraysum + a[i];
        }
        
return Arraysum;

}                               


int main()
{

    int BT,ST,PB,PS,RESULT;
    
        Multipleop MP;
        
            MP.read();
            MP.display();
            
                BT=MP.biggest();
                
                cout<<"Biggest Number in the Array is="<<BT<<'\n';

                ST=MP.smallest();
                cout<<"Smallest Number in the Array is="<<ST<<'\n';
                
                PB=MP.posbig();
                cout<<"Position of the Biggest Number in the Array is="<<PB<<'\n';
                
                PS=MP.possmall();
                cout<<"Position of the Smallest Number in the Array is="<<PS<<'\n';
               
               MP.swapbigandsmall();
                
               MP.display();
                
               RESULT=MP.sum();
               cout<<"Sum of the given Array ="<<RESULT<<'\n'; 
                    

}                               