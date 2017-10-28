#include<stdio.h>
#include<iostream>
using namespace std;
int min(int a,int b){
    return a<b?a:b;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n][3];
        for(int i=0;i<n;i++){
            scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
        }
        for(int i=1;i<n;i++){
            a[i][1]=a[i][1]+min(a[i-1][0],a[i-1][2]);
            a[i][0]=a[i][0]+min(a[i-1][1],a[i-1][2]);
            a[i][2]=a[i][2]+min(a[i-1][0],a[i-1][1]);
        }
        printf("%d\n",min(a[n-1][0],min(a[n-1][1],a[n-1][2])));
    }
    return 0;
}
