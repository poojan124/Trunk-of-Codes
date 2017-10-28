#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
bool cmp(int a,int b){
    return a>b;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int c=1;c<=t;c++)
    {
        int total,sum=0,ar[1005],n;
        scanf("%d %d",&total,&n);
        for(int j=0;j<n;j++)
            scanf("%d",&ar[j]);
        sort(ar,ar+n,cmp);
        int i=0;
        while(total>sum&&i<n){
            sum=sum+ar[i];
            i++;
        }
        if(total>sum){
            printf("Scenario #%d:\n",c);
            printf("impossible\n\n");
        }
        else{
            printf("Scenario #%d:\n",c);
            printf("%d\n\n",i);
        }
    }
}
