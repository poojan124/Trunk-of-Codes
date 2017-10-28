#include<bits/stdc++.h>
#define pi 3.14159265358979323846264
#define all(c) c.begin(),c.end()
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container),element) != container.end())
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
int max(int a,int b){
    return a>b?a:b;
}
int main()
{
    int n,k,ans=0;
    scanf("%d %d",&n,&k);
    int arr[n+1],t[k+1];
    memset(t,0,sizeof t);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        t[arr[i]%k]++;
    }
    int lp;
    if(k%2==1)
        lp=k/2;
    else
        lp=(k/2)-1;
    for(int i=1;i<=lp;i++){
        ans+=max(t[i],t[k-i]);
    }
    if(k==1)
        ans=1;
    printf("%d",ans);
    return 0;
}
