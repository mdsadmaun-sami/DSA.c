//Question:
//Sorted array {10,20,30,40,50} দেওয়া আছে। একটি value input নাও। Binary Search ব্যবহার করে value-এর সঠিক index বের  করে insert করো।
#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50};
    int n= 5;
    int value;
    scanf("%d",&value);
    int low = 0, high = n-1,mid;
    // Find insertion position using binary search
    while ( low <= high )
    {
        mid = (low+high)/2;
        if ( arr[mid] < value )
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    // Shift elements to make space
    for ( int i = n-1 ; i >= low ; i-- )
    {
        arr[i+1]= arr[i];
    }
    arr[low]= value;
    n++;
    printf("After insert:\n");
    for ( int i = 0; i < n ; i++ )
    {
        printf("%d ",arr[i]);
    }
}
