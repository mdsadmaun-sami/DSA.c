#include<stdio.h>
int main()
{
    int LA[]={10,20,30,40,50};
    int k= 4, value = 44;
    int n= 5;
    int j= n-1;
    n= n+1;
    while ( j >= k )
    {
        LA[j+1]=LA[j];
        j--;
    }
    LA[k] = value;
    for ( int i=0;i<n;i++ )
    {
        printf("%d ",LA[i]);
    }
    return 0;
}
