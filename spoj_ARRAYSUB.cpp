#include<stdio.h>
#include<iostream>
#include<deque>
using namespace std;
int arr[1000000];
void sol(int n,int k)
{
    int i;
    deque<int> dq(k);
    for(i=0;i<k;i++){
        while((dq.empty()!=true)&&arr[i]>=arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    for(;i<n;i++){
        printf("%d ",arr[dq.front()]);
        while(dq.empty()!=true && dq.front()<=i-k)
            dq.pop_front();
        while((dq.empty()!=true)&&arr[i]>=arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    printf("%d",arr[dq.front()]);
}
int main()
{
    int n;
    int k;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&k);
    sol(n,k);
    return 0;
}
