/*Program No-p330.c
dt-9-1-2022
Concept-Pointers with CharArray
Next Program-Read text until $ is given and Display the Nth line using Pointers
-------------------------------------------------------------------------------------------------
b[0]=address 1 should be there
b[1]=address 2 should be there
b[2]=address 3 should be there

So when we say pa = b[n-1] that means if user give 2 pa=b[2-1] ie pa=b[1]

when run the program

cc p330.c
./a.out p330.c

sun
moon
wind
$

1

Result should be moon.

Address b[0] holds the address 1 but when we give value 1 from scanf "n"-> b[n-1] =>b[1-1] becomes
0 then it will print the line in b[0].
--------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    char a[100];
    char *pa;
    char *b[100];
    int i,n; 
    
        for(pa=a;(*pa=getchar())!='$';pa++);
        *pa='\0';

        i=0;
        b[i]=a;
        i++;

            for(pa=a;*pa;pa++)
            {            
                if(*pa=='\n')
                {
                
                    b[i]=pa+1;
                    i++;
                }            
            }           

        scanf("%d",&n);  

        for(pa=b[n-1];*pa!='\n';pa++)
        {
        
            putchar(*pa);            
        }
        
}