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
int arr[1000002]={0};
int main()
{
    int t;
    scanf("%d",&t);
    arr[0]=0;
    arr[1]=0;
    arr[2]=1;
    arr[3]=1;
    arr[4]=1;
    for(int i=5;i<=1000000;i++){
        arr[i]=(arr[i-2]+arr[i-3])%1000000007;
    }
    while(t--){
        int n;
        scanf("%d",&n);
        printf("%d\n",arr[n]);
    }
}

