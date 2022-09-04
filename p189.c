/*Program No-p189.c
dt-11-10-2021
Concept-Char Array
Loop-For Loop
Next program-Display 'nth' line from the 'mth' line 
----------------------------------------------------------------------------------------------------
Example:
[G][O][A][\n]


[T][R][I][C][H][Y][\n]


[m][a][d][u][r][a][i][\n]


[v][i][j][a][y][w][a][d][a][\n]


b->[0][4][11][19][29]
    0  1  2   3   4


mthline ->  1

nthline ->  2

---------------------------------------------------------------------------------------------------

Input -> ANAND
         MOHAN
         MEERA
         ARVINDER
         CHENNAI
         LOS ANGELES
         $
    
Input -> 1

Input -> 4


Output = ANAND
         MOHAN
         MEERA
         CHENNAI 

---------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j,m,n,limit,po;

char a[100];
int  b[100];

for(i=0;(a[i]=getchar())!='$';i++);


a[i]='\0';

for(i=0,j=0,b[j]=i,j++;a[i];i++)
{


    if(a[i]=='\n')
    {
    
        po=i+1;
        b[j++]=po;
        
    }


}

limit=0;
b[j]=-1;

scanf("%d",&m);
scanf("%d",&n);

limit = b[m+n];

for(i=b[m-1];i<limit && a[i];i++)
{

    putchar(a[i]);

}

}

