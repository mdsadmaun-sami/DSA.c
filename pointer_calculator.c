/*1. Declare two integer variables and take input from the user.
2. Declare two integer pointers and assign the addresses of the variables to them.
3. Using pointers, calculate and display:
○ Addition
○ Subtraction
○ Multiplication
○ Division
○ Modulus
4. Display all results using pointer dereferencing.*/
#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);
  int *p1 = &a;
  int *p2 = &b;
  printf("Addition = %d\n", *p1 + *p2);
  printf("Subtraction = %d\n", *p1 - *p2);
  printf("Multiplication = %d\n", *p1 * *p2);
  printf("Division = %d\n", *p1 / *p2);
  printf("Modulus = %d\n", *p1 % *p2);
  return 0;
}
