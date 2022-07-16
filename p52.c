/*Program No - p52.c
dt-4-18-2021
Concept: Switch Case
Next Program Name : Read a single digit number and print it in word
-------------------------------------------------------------------
Note:-1
Single variable can take any one of the value[ ie.. one variable has multiple branching

Note:2
 Switch (v) -> variable name
 {
     case 0:
         ----
         ----
         ----
         ---- Any No of Statment
     case 1:
         ----
         ----
         ----
         ---- Any No of statment
         
    -
    -
    -
    
    Default: ->(else is the meaning for default )
        ----
        ----
        ----
        ----
 
 }
Note:3
 If it is one (ie, case 1:) it starts from case 1 and executee all the statement.
 
Note:4
 After executing the case it has to come immediatly so we have to use break.
 
Note:5
 When you put break then it comes out of the Switch statment and it will not go into remaining statment:
 
 -----------------------------------------------------------------------------------------------------------*/
 #include<stdio.h>
 int main()
 {
 
     int num;
     scanf("%d",&num);
     
     switch(num)
     {
          
         case 0:
             printf("zero = %d ",num);
         break;

         case 1:
             printf("one = %d ",num);
         break;
         
         case 2:
             printf("two = %d ",num);
         break;
         
         case 3:
             printf("three = %d ",num);
         break;
          
         case 4:
             printf("Four = %d ",num);
         break;
         
         case 5:
             printf("Five =%d ",num);
         break;
         
         case 6:
             printf("Six = %d ",num);
         break;  
         
         case 7:
             printf("Seven = %d ",num);
         break;
         
         case 8:
            printf("Eight =%d ",num);    
         break;
          
         case 9:
           printf("Nine = %d ", num);
          break;

    
         default:
           printf(" Print word only for single digit number = %d ",num); 
   
    
     
     }

 
 
 }
 
 