#include<stdio.h>
int main()
{
    int arr[100]={10,20,30,40,50};
    int n=5,i;
    int value;

    scanf("%d",&value);

    int low=0;
    int high=n-1;
    int mid;
    int index=-1;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(arr[mid]==value)
        {
            index=mid;
            break;
        }

        else if(arr[mid]<value)
        {
            low=mid+1;
        }

        else
        {
            high=mid-1;
        }
    }

    if(index==-1)
    {
        printf("not found");
    }

    else
    {
        for(i=index;i<n-1;i++)
        {
        arr[i]=arr[i+1];
        }
        n--;
        printf("after delete: ");
        for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
