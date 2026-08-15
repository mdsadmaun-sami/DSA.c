#include <stdio.h>

void merge(int LA[], int left, int mid, int right) 
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = LA[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = LA[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) 
    {
        if (L[i] <= R[j]) 
        {
            LA[k] = L[i];
            i++;
        } else {
            LA[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) 
    {
        LA[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) 
    {
        LA[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int LA[], int left, int right) 
{
    if (left < right) 
    {
        int mid = left + (right - left) / 2;
        mergeSort(LA, left, mid);
        mergeSort(LA, mid + 1, right);
        merge(LA, left, mid, right);
    }
}

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
    mergeSort(LA, 0, n - 1);
    printf("\nSorted Array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", LA[i]);
    }
    printf("\nStudent ID: %d\n", student_id);
    return 0;
}
