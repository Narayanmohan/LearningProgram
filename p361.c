/*Program No-P361.c
dt-10-9-2022
Concept-Function-Pointers
Next Program-Read text until $ is given and Count the Number of times the pattern is exist
---------------------------------------------------------------------------------------------*/
#include<stdio.h>
void read(char *pa);
int TimesPatternExist(char *pa, char *pb);
int main()
{

    char a[100];
    
    char b[100];

    int Total;
    
    read(a);

    read(b);
    
    Total = TimesPatternExist(a,b);
    
    printf("The Number of Times the Pattern Exist = %d",Total);
    
    
}

void read(char *pa)
{

    for(;(*pa=getchar())!='$';pa++);
    
    *pa='\0';


}

int TimesPatternExist(char *pa, char *pb)
{
    int count=0;

    for(;*pa==*pb && *pb!='\0';pa++,pb++)
    {
    
        if(*pb!='\0')
        {
            count=count+1;
        
        }
    
    }

return count;
}