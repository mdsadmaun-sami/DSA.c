/*Question : Swap Two Numbers Using Pointers
Write a C program to:
1. Input two integer numbers.
2. Declare two pointers to store their addresses.
3. Swap the values using pointers.
4. Display the values before and after swapping.*/
#include <stdio.h>
int main()
{
  int a, b, temp;
  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);
  int *ptr1 = &a;
  int *ptr2 = &b;
  printf("\nBefore Swapping: %d %d\n",*ptr1,*ptr2);
  // Swapping using pointers
  temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
  printf("\nAfter Swapping: %d %d\n",*ptr1,*ptr2);
  return 0;
}
