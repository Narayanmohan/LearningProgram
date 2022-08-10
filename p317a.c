/*program No-p317a.c
dt-8-9-2022
Concept-Char Array
Concept-Pointers with CharArray
Next Program-Read and display a text until $ is given
----------------------------------------------------------------------------------------------------------------------------------------
Notes:

For First character in the array it stores 8 bytes 108
For Next character in the array it stores 8 bytes  116...

In the below char a array
      100 108 116
 a=> |   |   |   |   |   |   |   |  
       0   1   2   3   4   5   6  	 	


char *pa

Herebelow we are assiging the first index[0]th address to the pointer variable.
pa= a -> Means Array always pointing first index Address by default. 

When comes to Array, we should NOt use & to get Address b'coz it always pointing to the first address of an array ie a[0]th Address =108


--------------------------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    
      
    char a[100];

    char *pa;
    

      //Read from keyboard character by characters
     for(pa=a;(*pa=getchar())!='$';pa++);
      
      
        
      // Display the keyboard input 
      for(pa=a;*pa!='\0';pa++)
      {
      
       printf("%c",*pa);
       
      }
                                                          
  

 
}  
  
    