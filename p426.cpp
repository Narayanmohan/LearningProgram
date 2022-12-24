/*Program No-P426.cpp
dt-12-15-2022
Concept-Class
Concept-Char Array
Next Program-Read character until $ is given and perform the following operations.
-----------------------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;

class charmulop
{

    private:
        
            char a[100];
        
    public:        
            void read();
            void display();
            void countuplosdsc(int *uc,int *lc, int *sd, int *sc);
            void countlwc(int *l,int *w,int *character);
            void copyarray(char *ca);
            void copyFirstNcha(char *pb,int num);
            void copynthChaFromMthPos(char *pb,int mpos,int nthcha);
            int  findLength(char *pb);
            void copyLastNchar(char *pb,int lastncharacter);
            void reversecharacter(char *pb);
            int countpattern(char *pb);
            void deletepattern(char *pb,char *pc);
            void replacepattern(char *pb, char *pc,char *pd);            
};


void charmulop::read()
{

  char *pb;
        
     for(pb=a;(*pb=getchar())!='$';pb++);
     
     *pb='\0';     

}

void charmulop::display()
{ 
     char *ps;
              
     for(ps=a;*ps!='\0';ps++)
     {                           
                                                  
        cout<<*ps;        
     }	  
      
}

void charmulop::countuplosdsc(int *uc,int *lc, int *sc, int *sd)
{
    char *pt;
           
    *uc=*lc=*sc=*sd=0;
        
    for(pt=a;*pt!='\0';pt++)
    {
    
        if(*pt>=65 && *pt<=90)
        {
            *uc=*uc+1;

        }
        
        else if(*pt>=97 && *pt<=122)
        {
        
            *lc=*lc+1;
        }
        
        else if(*pt>=48 && *pt<=57)
        {
        
            *sd=*sd+1;
        }   
        else
        {
            *sc=*sc+1;
        }         
    }  

}

void charmulop::countlwc(int *l,int *w,int *character)
{

    char *pc;
    
    *w=*character=0;
    *l=1;
        
        for(pc=a;*pc!='\0';pc++)
        {
            if(*pc=='\n')
            {
                *l=*l+1;
            
            }
            else if(*(pc+1)==' '||*(pc+1)=='\n'||*(pc+1)=='\0')
            {                                         
                *w=*w+1;            
            }
           
            
                 *character = *character+1;
                  
        
        }

}


void charmulop::copyarray(char *ca)
{

    char *pk;
    
        for(pk=a;*pk!='\0';pk++)
        {
        
        
            *ca = *pk;
            *ca++;
        
        }


*ca='\0';

}

void charmulop::copyFirstNcha(char *pb,int num)
{
    
        char *pq;
        char *pr;        
        
            pq=a;
        
            for(pr=pq+num;pq<pr;pq++)
            {
            
                *pb=*pq;
  
                *pb++;
            
            }    

*pb='\0';             

}

void charmulop::copynthChaFromMthPos(char *pb,int mpos,int nthcha)
{

    char *pf;
    char *pg;
    
        pf=a;
        
        pf=(pf+mpos);
        pg=(pf+nthcha);
            
        
            for(pf;pf<pg && *pf!='\0';pf++)
            {
            
                *pb=*pf;
                *pb++;
            
            }
            

*pb='\0';

}

int charmulop::findLength(char *pb)
{

    int length;

    length=0;
   
        for(; *pb!='\0';pb++)
        {
        
            length= length+1;
            
            
        } 


return length;

}

void charmulop::copyLastNchar(char *pb,int lastncharacter)
{

   char *pl;

   int length,g;

   pl=a;

   length=0;
   
    
	length=findLength(pl);

	g=length-lastncharacter;

	
		for(pl=pl+g;*pl!='\0';pl++)
		{

			*pb=*pl;
			*pb++;

		}


*pb='\0';
}

void charmulop::reversecharacter(char *pb)
{

    char *pr;
    char *po;
    int pn;
       
      
    
        pr=a;

        po=pr;
               
            pn=findLength(pr);                                

             pr=pr+pn-1;
            
                for(pr;pr>=po;pr--)
                {                
                    *pb=*pr;
                    *pb++;                
                }

*pb='\0';
}
            
           
int charmulop::countpattern(char *pb)
{

    int count;
    count=0;
    
        char *pe;
        char *pf;
        char *px;
        
            pe=a;
            
                for(; *pe!='\0';pe++)
                {
                
                    for(px=pe,pf=pb; *px==*pf && *pf!='\0';pf++,px++);
                    
                        if(*pf=='\0')
                        {
                        
                            count=count+1;
                        
                        }                

               }

return count;

}

void charmulop::deletepattern(char *pb,char *pc)
{


    char *pv;
    char *py;
    char *pz;

        pv=a;
        
            for(; *pv!='\0';)
            {
            
                for(py=pv,pz=pb;*py==*pz && *pz!='\0';pz++,py++);
            
                
                    if(*pz=='\0')
                    {
                        pv=py;
                    
                    }
                    else
                    {
                        *pc=*pv;
                         pc++;
                         pv++;
                    
                    }
            }


*pc='\0';


}

void charmulop::replacepattern(char *pb, char *pc,char *pd)
{

    char *pi;
    char *pl;
    char *pj;
    char *pk;
    
        pi=a;
        
            for(; *pi!='\0';)
            {
                for(pj=pi,pk=pb;*pj==*pk && *pk!='\0';pk++,pj++);
                
                if(*pk=='\0')
                {
                    
                    for(pi=pj,pl=pc; *pl!='\0';pl++,pd++)
                    {
                    
                        *pd=*pl;
                    
                    }
                
                }
                else
                {
                
                   *pd=*pi;
                    pd++;
                    pi++;
                } 
                    
            
            }


*pd='\0';
}


int main()
{

    int upper,lower,specialcharacter,singledigit;

    int line,word,character;
    
    int numfornthcha;
    
    char b[1000];
    
    char c[1000];
    
    char d[1000];
    
    char e[1000];
    
    char cfirstnthcha;
     
    int mthpos,nthcharpos; 
     
    int lengthofanarray;
    
    int lastncha;
    
    int countptrn;
    
                           
    charmulop cop;

    cop.read();

    cop.display();
    
          

    /*cop.countuplosdsc(&upper,&lower,&specialcharacter,&singledigit);      
               
            cout<<"Uppercase count="<<upper<<"Lowercase count="<<lower<<"Spl.character.count="<<specialcharacter<<"Single digit Count="<<singledigit;
    
      cop.countlwc(&line,&word,&character);    
              
            cout<<'\n'<<"linecount="<<line<<"Wordcount="<<word<<"charactercount="<<character; 
    
     cop.copyarray(b);
        
            cout<<'\n'<<"Copied into Another Array="<<b<<'\n';
            
     cin>>numfornthcha;       
    
     cop.copyFirstNcha(b,numfornthcha);
     
         cout<<'\n'<<"Copy The First Nth Character="<<b; 
    
     
     cin>>mthpos>>nthcharpos;
     
     cop.copynthChaFromMthPos(b,mthpos,nthcharpos);
     
         cout<<"\n"<<"Nthcharacter From Mth Position"<<b;
     
     cop.copyarray(b);    
         
     lengthofanarray=cop.findLength(b);
     
         cout<<lengthofanarray;  
         
     cin>>lastncha;         
     cop.copyLastNchar(b,lastncha);
         cout<<'\n'<<"Last Nth character of an array is="<<b;
         
     cop.reversecharacter(b);
         cout<<'\n'<<"Reverse Character of an array is="<<b;
         
   cin>>b;            
   countptrn=cop.countpattern(b);
         cout<<'\n'<<"Count of the same pattern is="<<countptrn;
         
   cin>>c; //Pattern to be deleted.     
   cop.deletepattern(c,d);          
        cout<<'\n'<<"Removed the Entered Pattern is = "<<d;*/
   
   cin>>c; //pattern to be deleted.
   cin>>d; //pattern to be replaced.     
   cop.replacepattern(c,d,e);
       cout<<'\n'<<"Pattern replaced="<<e;             
         
         
    
         
   

}