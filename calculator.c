#include <stdio.h>
 
int main()
{
   int first, second, add, subtract, multiply;
   first= 2;
   second=3;
   float divide;
 
   add = first + second;
   subtract = first - second;
   multiply = first * second;
   divide = first / (float)second;   //typecasting
 
   printf("Sum = %d\n", add);
   printf("Difference = %d\n", subtract);
   printf("Multiplication = %d\n", multiply);
   printf("Division = %.2f\n", divide);
 
   return 0;
}

