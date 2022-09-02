/*Program No-p330.c
dt-9-1-2022
Concept-Pointers with CharArray
Next Program-Read text until $ is given and Display the Nth line using Pointers
------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    char a[100];
    char *pa;
    char *b[100];
    int i,n;
    

        for(pa=a;(*pa=getchar())!='$';pa++)

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

            b[i]=NULL;

            scanf("%d",&n);
            
                for(i=0,pa=b[n-1];b[i]!=NULL;i++)
                {
                
                    printf("\n%p",b[i]);
                }


}
