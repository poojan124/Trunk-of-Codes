#include<stdio.h>
#include<iostream>
using namespace std;
void rep(int *a,int n){for(int i=0;i<n;i++)scanf("%d",&a[i]);}
long long merge(int *a,int *temp,int left,int mid,int right){
    int i,j,k;
    long long cnt=0;
    i=left;
    j=mid;
    k=left;
    while((i<=mid-1)&&(j<=right)){
        if(a[i]<=a[j])
            temp[k++]=a[i++];
        else{
            temp[k++]=a[j++];
            cnt=cnt+(mid-i);
        }
    }
    while(i<=mid-1)
        temp[k++]=a[i++];
    while(j<=right)
        temp[k++]=a[j++];
    for(int c=left;c<=right;c++)
        a[c]=temp[c];
    return cnt;
}
long long merge_sort(int *a,int *temp,int left, int right){
    long long int invcnt=0;
    int mid;
    if(left<right){
         mid=left+(right-left)/2;
        //cout<<mid<<left<<right<<endl;
        invcnt=merge_sort(a,temp,left,mid);
        invcnt+=merge_sort(a,temp,mid+1,right);
        invcnt+=merge(a,temp,left,mid+1,right);
    }
    return invcnt;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,arr1[200005],arr2[200005];
        scanf("%d",&n);
        rep(arr1,n);
        long long  count=merge_sort(arr1,arr2,0,n-1);
        printf("%lld\n",count);
    }
}
