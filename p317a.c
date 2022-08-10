/*program No-p317a.c
dt-8-9-2022
Concept-Char Array
Concept-Pointers with CharArray
Next Program-Read and display a text until $ is given
---------------------------------------------------------------------
Notes:
In the below char a array

 a=> |  |   |  |  |  |  |  |  











--------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    
    int i;
  
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
  
    