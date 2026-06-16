#include<stdio.h>
int main()
{
    int LA[]={10,20,30,40,50};
    int target=10;
    for ( int i=0;i<5;i++)
    {
        if (LA[i]== target)
        {
            printf("found= %d",LA[i]);
            return 0;
        }
    }
    printf("not found");
    return 0;
}
