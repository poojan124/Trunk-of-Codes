#include <iostream>
#include <deque>
#include<stdio.h>
using namespace std;
void printKMax(int arr[], int n, int k){
   //Write your code here.
    deque<int> dq(k);
    int i;
    for(i=0;i<k;i++)
    {
        while((dq.empty()!=true)&&arr[i]>=arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    for(;i<n;i++)
    {
        printf("%d ",arr[dq.front()]);
        while(dq.empty()!=true&&dq.front()<=i-k)
            dq.pop_front();
        while(dq.empty()!=true&&arr[i]>=arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    printf("%d\n",arr[dq.front()]);
}
int main(){

   int t;
   cin >> t;
   while(t>0) {
      int n,k;
        scanf("%d %d",&n,&k);
       int i;
       int arr[n];
       for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
       printKMax(arr, n, k);
       t--;
     }
     return 0;
}
