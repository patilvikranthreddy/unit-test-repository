#include <stdio.h>
 
int main()
{
   int first;
 int second, add, subtract, multiply;
   second=3;
   float divide;
 
   add = first + second;
   subtract = first - second;
   multiply = first * second;
    //typecasting
 
   printf("Sum = %d\n", add);
   printf("Difference = %d\n", subtract);
   printf("Multiplication = %d\n", multiply);
   printf("Division = %.2f\n", divide);
   
   return 0;
}

