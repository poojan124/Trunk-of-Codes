#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int arr1[1005],arr2[1005],n,m,min=INT_MAX;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d",&arr1[i]);

        scanf("%d",&m);
        for(int i=0;i<m;i++)
            scanf("%d",&arr2[i]);

        sort(arr1,arr1+n);
        sort(arr2,arr2+m);
        int j=0,i=0;
        if(n>m){
            for(i=0;i<m;i++){
                while(j<n){
                    int diff=abs(arr2[i]-arr1[j]);
                    if(diff<min)
                        min=diff;
                    if(arr1[j]>arr2[i])
                        break;
                    else
                        j++;
                }
            }
            printf("%d\n",min);
        }
        else{
            for(i=0;i<n;i++){
                while(j<m){
                    int diff=abs(arr1[i]-arr2[j]);
                    if(diff<min)
                        min=diff;
                    if(arr1[i]<arr2[j])
                        break;
                    else
                        j++;
                }
            }
            printf("%d\n",min);
        }
    }
    return 0;
}
