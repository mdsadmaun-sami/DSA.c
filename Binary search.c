#include<stdio.h>
int main()
{
    int LA[100],n,target,count=0;
    printf("Enter n and Target: ");
    scanf("%d %d",&n,&target);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&LA[i]);
    }
    int low = 0,high = n-1;
    while(low<=high)
    {
        int mid= (low+high)/2;
        if(LA[mid]==target)
        {
            printf("Found: %d",LA[mid]);
            count++;
            return 0;                     // break; can be usable. no problem.
        }
        else if(LA[mid]<target)
        {
            low= mid+1;
        }
        else
        {
            high= mid-1;
        }
    }
    if(count==0)
    {
        printf("Not found");
    }
    return 0;
}

---------- without count ------------

#include<stdio.h>
int main()
{
    int LA[100],n,target;
    printf("Enter n and Target: ");
    scanf("%d %d",&n,&target);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&LA[i]);
    }
    int low = 0,high = n-1;
    while(low<=high)
    {
        int mid= (low+high)/2;
        if(LA[mid]==target)
        {
            printf("Found: %d",LA[mid]);
            return 0;                      // remember<<<< break; can't be usable. return 0; must
        }
        else if(LA[mid]<target)
        {
            low= mid+1;
        }
        else
        {
            high= mid-1;
        }
    }
    printf("Not found");
    return 0;
}
