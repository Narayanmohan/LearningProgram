/*Program No-P360.c
dt-10-9-2022
Concept-Function-Pointers
Next Program-Read text until $ is given and Display nth Line from the Mth Line
------------------------------------------------------------------------------------
Run the Program as below"

cc p360.c
./a.out p360.c

sun
moon
Meera
Arvindar
Govind
Vasudev
$

2
4

Output should be as below:

moon
Meera
Arvindar
Govind
------------------------------------------------------------------------------------*/
#include<stdio.h>
void read(char *pa);
void nthLineFromMthLine(char *pa,char **pb);
void display(char *pa,char **pb,int m,int n);

int main()
{

    int n,m;
    
    char a[100];
    
    char *b[100];

    read(a);
    
    scanf("%d%d",&m,&n);
    
    nthLineFromMthLine(a,b);
    
    display(a,b,m,n);       
}

void read(char *pa)
{
    for(; (*pa=getchar())!='$';pa++);
    *pa='\0';

}

void nthLineFromMthLine(char *pa,char **pb)
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

void display(char *pa,char **pb,int m, int n)
{
    
    char *pc;
    
    pc=*(pb+m+n-1);
    
    for(pa=*(pb+m-1);pa<pc;pa++)
    {
    
        putchar(*pa);
    }

}


