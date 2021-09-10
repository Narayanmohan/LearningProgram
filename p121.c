/* program No- p121.c
dt-9-2-2021
Concept: CHAR ARRAY
Next Program: Read text and Convert Fortran to Pascal
------------------------------------------------------------------------------
Example:


FORTRAN:

  0  1  2  3   4  5  6  7  8   9  
 [a][=][1][0][\n][b][=][2][0][\n][\0]
 
 
PASCAL:
 0  1  2  3  4   5  6  7  8  9  10 11  12
[a][:][:=][0][;][\n][0][:][2][0][;][\n][\0] 

-----------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j;
char a[100];
char b[100];

i=0;

scanf("%c",&a[i]);

while(a[i]!='$')
{
    i++;
    
scanf("%c",&a[i]);


}

a[i] = '\0';
i=0;
j=0;



while(a[i]!='\0')
{

    if(a[i]=='=')
    {
        b[j] = ':';
        j++;
        b[j] = '=';
    }

    else if( a[i] =='\n')
    {
        b[j] = ';';
        j++;
        b[j] = a[i];
       
    
    }
    else
    {
    
     b[j] = a[i];
     
    
    }
    
    i++;
    j++;

}


b[j] = '\0';
j=0;

while(b[j]!='\0')
{

 printf("%c",b[j]);
 
 j++;
    
}

} 
 