/*Question: Square and Cube Using Pointers
Write a C program to:
1. Input an integer number.
2. Declare a pointer to store its address.
3. Calculate the square and cube using the pointer.
4. Display the results.*/
#include <stdio.h>
int main()
{
  int num;
  int square, cube;
  printf("Enter an integer: ");
  scanf("%d", &num);
  int *ptr = &num;
  square = (*ptr) * (*ptr);
  cube = (*ptr) * (*ptr) * (*ptr);
  printf("Square = %d\n", square);
  printf("Cube = %d\n", cube);
  return 0;
}
