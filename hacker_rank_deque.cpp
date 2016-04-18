#include <iostream>
#include <deque>
#include<stdio.h>
using namespace std;
void printKMax(int arr[], int n, int k){
   //Write your code here.
    deque<int> dq;
    int max=arr[0],count=1;
    dq.push_back(arr[0]);
    for(int i=1;i<n;i++)
    {
        dq.push_back(arr[i]);
        if(arr[i]>dq[count-1])
        {
            count++;
            if(i>k-1)
                count=k;
        }
        printf("count = %d %d\n",count,dq.size());
        if(i>=k-1)
        {
            printf("%d ",dq[count-1]);
            dq.pop_front();
            count--;
        }
    }
    printf("\n");

}
int main(){

   int t;
   cin >> t;
   while(t>0) {
      int n,k;
       cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++)
            cin >> arr[i];
       printKMax(arr, n, k);
       t--;
     }
     return 0;
}
