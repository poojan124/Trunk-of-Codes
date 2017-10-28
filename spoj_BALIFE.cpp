#include<bits/stdc++.h>
#define all(c) c.begin,c.end()
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container),element) != container.end())
#define tr(container, it) \
    for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)

using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=-1){
    int sum=0,max=0,ans=0,arr[10000],avg;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    if(avg*n!=sum){
        printf("-1\n");
    }
    else{
        for(int i=0;i<n-1;i++){
            int diff=arr[i]-avg;
            arr[i+1]+=diff;
            diff=abs(diff);
            max=max>diff?max:diff;
        }
        printf("%d\n",max);
    }
    scanf("%d",&n);
    }
    return 0;
}
