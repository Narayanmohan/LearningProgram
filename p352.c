/*Program No-P352.c
dt-9-26-2022
Concept-Function-Pointers
Next Program-Read text until $ is given and copy the Last N characters
-----------------------------------------------------------------------------------*/
#include<stdio.h>
void read(char *pa);
void lastNcha(char *pa,char *pb,int lastNCharacter);
int len(char *pa);
void display(char *pb);

int main()
{

    char a[100];
    
    char b[100];
    
    int lastNcharacter;
    
    read(a);
    
    scanf("%d",&lastNcharacter);
        
    lastNcha(a,b,lastNcharacter);
    
    display(b);
    
}

void read(char *pa)
{

    for(; (*pa=getchar())!='$';pa++);
    
    *pa='\0';


}

void lastNcha(char *pa,char *pb, int lastNCharacter)
{
    int length,g; 
         
    length=0;
    
    length=len(pa);

    g=length-lastNCharacter;
  
    
        for(pa=pa+g;*pa!='\0';pa++)
        {
            *pb=*pa;
            
             pb++;
        
        }

*pb='\0';
}


int len(char *pa)
{

    int length;

    length=0;
    
    
       for(pa;*pa!='\0';pa++)
        {
        
            length=length+1;
        }

return length;

}



void display(char *pb)
{

    for(; *pb!='\0';pb++)
    {
        
        putchar(*pb);
    
    }
    
}

