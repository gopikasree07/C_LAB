#include<stdio.h>
int main()
{
  int a,b,res,choice;
  printf("=============BITWISE OPREATIONS==========");
  printf("Enter the frist number :");
  scanf("%d",&a);
  printf("Enter the second number :");
  scanf("%d",&b);
  printf("\n--------MENU-------");
  printf("1.Bitwise AND(&)\n");
  printf("2.Bitwise OR (|)\n");
  printf("3.Bitwise XOR(^)\n");
  printf("4.Bitwise NOT(~)\n");
  printf("5.Left Shift(<<)/n");
  printf("6.Right shift(>>)\n");
  printf("\n Enter your choice:");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
           res=a&b;
           printf("Bitwise AND Result=%d",res);
           break;
    case 2:
           res=a|b;
           printf("Bitwise OR Result =%d ",res);
           break;
    case 3:
           res=a^b;
           printf("Bitwise XOR Result =%d",res);
           break;
    case 4:
           res=~a;
           printf("Bitwise NOT Result =%d",res);
           break;
    case 5:
           res=a<<b;
           printf("Left Shift Result = %d",res);
           break;
    case 6:
           res=a>>b;
           printf("Right Shift REsult");
           break;
    default:
           printf("Invalid choice.");
    }
    return 0;
 }
//
OUTPUT 
===== OPERATORS AND EXPRESSIONS =====  
    Enter the first number: 20  
    Enter the second number: 10  
      ----- MENU -----
       1. Addition
       2. Subtraction 
       3. Multiplication 
       4. Division
       5. Modulus 
   Enter your choice: 1
   Result = 30
   
           
  
  
