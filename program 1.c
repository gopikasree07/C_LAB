#include<stdio.h>
int main()
{
 int a,b,choice,res;
 printf("============OPREATORS AND EXPRESSION=========\n");
 printf("enter the first number:");
 scanf("%D",&a);
 print("enter the second number:");
 scanf("%d",&b);
 print("\n-------MENU--------");
 printf("1.Addition\n");
 printf("2.Subtraction\n");
 printf("3.Multiplication\n");
 printf("4.Division\n");
 printf("5.Modulus\n");
 printf("\n Enter your chice:");
 scanf("%d",&choice);
 switch(choice)
  {
    case 1:
         res=a+b;
         printf("Result=%d",res);
         break;
    case 2:
         res=a-b;
         printf("Result=%d",res);
         break;
    case 3:
         res=a*b;
         printf("Result=%d",res);
         break;
    case 4:
         if(b!=0)
         {
           res=a/b
           printf("Result=%d",res);
         }
         else
         {
            printf("Division by Zero is not possible ");
         }
         break;
    case 5:
         if(b!=0)
         {
            res=a%b;
            printf("Result=%d",res);
         }
         else
         {
            printf("Modulus by Zero is not posible.");
         }
         break;
    default:
            printf("Invalid choice");
         }
         return 0;
 }
