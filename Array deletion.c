#include<stdio.h>
int main()
{
    int LA[]={10,20,30,40,50};
    int k= 4;
    int n= 5;
    int j= k;
    while ( j > n )
    {
        LA[j]=LA[j+1];
        j++;
    }
    n--;
    for ( int i=0;i<n;i++ )
    {
        printf("%d ",LA[i]);
    }
    return 0;
}
