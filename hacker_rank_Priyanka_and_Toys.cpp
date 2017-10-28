#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    long int n,arr[100005],count=0,i;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
        scanf("%ld",&arr[i]);
    sort(arr,arr+n);
    for(i=0;i<n;)
    {
        count++;
        long int j=i;
        while((arr[j]-arr[i])<=4)
            j++;
        i=j;
    }
    printf("%ld",count);
}
