/*program No P69.c
dt- 8-8-2021
Next Program: Read and Display the Characters other than dollar=>$.
Concept: LOOPING CONDITION
-----------------------------------------------------------
Analysis:
  Input c
  Output: Displaycharacterotherthan$
  
  Logic: loop
  Condtion c!=$
  T => Print C
  Input c
----------------------------------------------------------*/
#include<stdio.h>
int main()
{

char c;

scanf("%c",&c);

while(c!='$')
{

    printf("%c",c);

    scanf("%c",&c);

}


}
 
 
 
      
  
  
  