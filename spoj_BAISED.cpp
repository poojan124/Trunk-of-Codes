#include<bits/stdc++.h>
#define all(c) c.begin,c.end()
#define present(container, element) (container.find(element) != container.end()) //for vector
#define cpresent(container, element) (find(all(container),element) != container.end()) //for map set
#define tr(container, it) \
    for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)

using namespace std;
long long arr[100000]={0};
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long ans=0,n,val;
        string temp;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>temp;
            cin>>val;
            arr[i-1]=val;
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            ans=ans+abs(i+1-arr[i]);
        }
        cout<<ans<<endl;
    }
}
