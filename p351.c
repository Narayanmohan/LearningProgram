/*Program No-P351.c
dt-9-23-2022
Concept-FunctionPointers
Next Program-Read text until $ is given and copy Nth characters from the Mth Position
[B----------------------------------------------------------------------------------------*/
#include<stdio.h>
void read(char *pa);
void nchaFromMthPos(char *pa,char *pb,int mpos,int nthcha);
void display(char *pb);

int main()
{

    char a[100];

    char b[100];
    
        int mpos,nthcha;
        
        read(a);
        
        scanf("%d%d",&mpos,&nthcha);
        
        nchaFromMthPos(a,b,mpos,nthcha);
        
        display(b);

}

void read(char *pa)
{

    for(;(*pa=getchar())!='$';pa++);
    
    *pa='\0';

}


void nchaFromMthPos(char *pa,char *pb, int mpos,int nthcha)
{

       char *ps;
    
        
        pa=(pa+mpos);
    
        ps=(pa+nthcha);
        
            for(pa;pa<ps;pa++)
            {
                *pb=*pa;
                 
                 pb++;
            
            }  
 
   *pb='\0'; 


}

void display(char *pb)
{

    for(; *pb!='\0';pb++)
    {
        putchar(*pb);
    
    }

}



