#include <stdio.h>

int main()
{
    int student_id = 681;
    int LA[100], n;
    printf("Enter number of elements (n): ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &LA[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (LA[j] > LA[j + 1])
            {
                int temp = LA[j];
                LA[j] = LA[j + 1];
                LA[j + 1] = temp;
            }
        }
    }
    printf("\nSorted Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", LA[i]);
    }
    printf("\nStudent ID: %d\n", student_id);
    return 0;
}
