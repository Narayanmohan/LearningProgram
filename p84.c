/*Program No- p84
Concept: Array
Loop: While Loop.
dt-8-11-2021
Next Program-Read and Display 10 numbers.
-----------------------------------------------------------------------------------------------------------------------------
                        Notes:
-Array is a series of element of same type. it is placed in a contiguous memory location. it can be refferenced by a index:
-Reserve teh block of Memory.
-If we say int a=> that means it reserve one room.
-So if we want to reserve more room then we have to declare array as a[10].
-If we want to store value in the array then we have to use - INDEXING.
-Indexing will always start from 0 to 9.
-If we want to store value in an array we have to use the below terminology.
    a)-We have to use array name ( ie. a).
    b)-We have to use Room No (ie.0).
    c)-Finally we have to store the value.
    
a[0] = 10;

Here,
a => array name.
0 => Index
10=> data.

- Indexing variable should always be i,j,k.
- Read=> In first loop we should Read.
- Print=>In next loop we can process.

Note:

Always they can't process in the very beginning of the loop.
----------------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int a[10];
int i;
i=0;

while(i<10)
{

     scanf("%d",&a[i]);
     i=i+1;

}

i=0;

while(i<10)
{

 printf("%d",a[i]);

 i= i+1;

}

}
    



