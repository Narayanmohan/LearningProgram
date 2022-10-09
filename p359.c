/*Program No-P359.v
dt-10-8-2022
Concept-Function-Pointers
Next Program-Read text until $ is given and Display the Nth Line
-----------------------------------------------------------------------------------*/
#include<stdio.h>
void read(char *pa);
void storeStarPos(char *pa, char **pb);
void displayNthLine(char *pa,char **pb, int n);
int n;
int main()
{
    char a[100];
    char *b[100];
    
        read(a);
        
        scanf("%d",&n);
        
        storeStarPos(a,b);
        
        displayNthLine(a,b,n);
}

void read(char *pa)
{

    for(; (*pa=getchar())!='$';pa++);
    
    *pa='\0';

}

void storeStarPos(char *pa,char **pb)
{   
    
    for(*pb=pa,pb++;*pa;pa++)
    {
        if(*pa=='\n')
        {
        
            *pb=pa+1;
 
             pb++;
        
        }
    
    }

*pb=NULL;

}

void displayNthLine(char *pa, char **pb,int n)
{
   
    for(pa=*(pb+n-1); *pa!='\n';pa++)
    {
        putchar(*pa);
    
    }

}