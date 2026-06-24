#include<stdio.h>
int main()
{
    int arr[100]={10,20,30,40,50};
    int n=5,i;
    int value;
    scanf("%d",&value);

    for(i=0;i<n;i++)
    {
        if(arr[i]>value)
        {
            break;
        }
    }
    for(int j=n-1;j>=i;j--)
    {
        arr[j+1]=arr[j];
    }
    arr[i]=value;
    n++;
    printf("after insert: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

return 0;
}
