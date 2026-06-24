#include<stdio.h>
int main()
{
    int arr[100]={10,20,30,40,50};
    int n=5,i;
    int value;
    int index=-1;
    scanf("%d",&value);
    for(i=0;i<n;i++){

        if(arr[i]==value){
            index=i;
            break;
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
