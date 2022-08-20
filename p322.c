/*Program No-p322.c
dt-8-19-2022
Concept-Pointers with CharArray
Next Program-Read text until $ is given and copy Nth characters from the Mth Position
-------------------------------------------------------------------------------------
Example-From Position to Character.:
    
    Input->I LOVE INDIA
    
    M->2
    N->7

   OUTPUT->LOVE IN

A => | I |  | L | O | V | E |   | I | N | D |  I | A |$|
       0   1  2   3   4   5   6   7   8   9   10   11

Note:
    
    Mth Position -2(ie..)index 2 pointing the Letter L.
    Nth Character-7(ie..)index 8 pointing the Letter N.
    
From the Mth Position 2itself  to 7 Letters.

so, 

Position-2-[L]=1st Nth character.
Position-3-[O]=2nd Nth character.
Position-4-[v]=3rd Nth character.          
Position-5-[E]=4th Nth character.
Position-6-[ ]=5th Nth Empty space character.
Position-7-[I]=6th Nth character.
Position-8-[N]=7th Nth character. 

when Run:
    1-cc p322.c
    2-./a.out p322.c
    I LOVE INDIA$
    2
    7
Here 2 for Mth Position & 7 for Nth characters.
------------------------------------------------------------------------------------*/        
#include<stdio.h>
int main()
{

    char a[100];

    char b[100];

    char *pa,*pb,*pc;

    int limit,nthcha,mpos;
    
        pa=a;

        pb=b;       
        
            for(pa=a;(*pa=getchar())!='$';pa++);
            
                *pa='\0';
                
                    scanf("%d%d",&mpos,&nthcha);
                    
                        pa=(a+mpos);
                        
                        pc=(pa+nthcha);
                        
                                                
                            for(pa;pa<pc;pa++)
                            {
                            
                                *pb=*pa;
                                 pb++;
                            }                            
                            

                            *pb='\0';
                            
                            for(pb=b;*pb!='\0';pb++)
                            {
                                putchar(*pb);
                            }                


}
