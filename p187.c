/*Program No-p187.c
dt-11-10-2021
Concept- Char Array
Loop- For Loop
Next Program-Print Starting Position of each line
---------------------------------------------------------------------  
Example:

INPUT -> [o][n][e][\n][t][w][o][\n][l][r]


OUTPUT ->[0][4][8][-1][][]
          0  1  2  3  4 5

i love india
i love America
i love Africa
i love LosAngeles$
0132842         
---------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j,po;
char a[100];
int b[100];
po=0;

for(i=0;(a[i]=getchar())!='$';i++);

a[i]='\0';


for(i=0,j=0,b[j++]=i;a[i];i++)
{

    if(a[i]=='\n')
    {
        po=i+1;
        b[j++]=po;
        
    }


}

b[j]=-1;

for(j=0;b[j]!=-1;j++)
{

    printf("%d",b[j]);

}


}
