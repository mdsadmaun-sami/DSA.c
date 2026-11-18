/*Question.Calculate the Average Using Pointers
Write a C program to:
1. Input three integer numbers.
2. Declare three pointers.
3. Calculate the average using pointers.
4. Display the average.*/
#include <stdio.h>
int main()
{
  int a, b, c;
  float average;
  printf("Enter three integers: ");
  scanf("%d %d %d", &a, &b, &c);
  int *p1 = &a;
  int *p2 = &b;
  int *p3 = &c;
  average = (*p1 + *p2 + *p3) / 3.0;
  printf("Average = %.2f", average);
  return 0;
}
