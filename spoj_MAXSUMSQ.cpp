#include<stdio.h>
#include<iostream>
using namespace std;
long long max(long long a,long long b){
    return a>b?a:b;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,j,arr[100005];
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        long long max_all_time=arr[0],max_curr=arr[0];
        for(i=1;i<n;i++){
            max_curr=max(arr[i],max_curr+arr[i]);
            max_all_time=max(max_all_time,max_curr);
        }
        long long m_a=arr[0],m_c=arr[0],count=0;
        for(i=1;i<n;i++){
            m_a=arr[i-1];
            if(m_a==max_all_time)
                    count++;
            for(j=i;j<n;j++){
                m_a=m_a+arr[j];
                if(m_a==max_all_time)
                    count++;
            }
        }
        if(arr[n-1]==max_all_time)
            count++;
        printf("%lld %lld\n",max_all_time,count);
    }
    return 0;
}
/**
input:
------
14
3
-1 -1 -1
4
2 0 -2 2
5
2 -2 2 -2 2
5
0 0 0 0 0
9
0 3 5 -7 -1 7 8 -15 15
9
2 3 -5 2 3 -5 5 -5 5
1
0
1
3
2
3 0
4
3 -3 0 3
5
3 -3 0 0 3
6
3 -3 0 0 3 -3
8
3 -3 0 0 3 -3 0 3
4
1 -1 2 2
output:
------
-1 3
2 4
2 6
0 15
15 7
5 10
0 1
3 1
3 2
3 4
3 5
3 5
3 11
4 2
**/
