#include<bits/stdc++.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int arr[]={1,3,2,-1,-3,-2};
        long long int n,i;
        scanf("%lld",&n);
        if(n>=7)
            n=(n%7)+1;
        int sum=0;
        for(i=0;i<n;i++)
            sum=sum+arr[i];
        printf("%d\n",sum);
    }
    return 0;
}
