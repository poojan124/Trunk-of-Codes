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
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,ans=0;
        scanf("%lld",&n);
        long long int arr[n];
        for(int i=0;i<n;i++)
            scanf("%lld",&arr[i]);
        vector<long long > st;
        st.push_back(arr[0]);
        long long int idx=0,cmp=arr[0],ele;
        for(int i=1;i<n;i++){
            ans=ans%1000000007;
            if(arr[i]<=st.back()){
                st.push_back(arr[i]);
            }
            else if(arr[i]>st.back()){
                if(st.back()==cmp){
                    cmp=arr[i];
                    idx=i;
                    st.push_back(arr[i]);
                }
                else if(arr[i]>cmp||arr[i]==cmp){
                    for(int j=idx+1;j<i;j++){
                        ans+=cmp-st[j];
                        st[j]=cmp;
                    }
                    cmp=arr[i];
                    idx=i;
                    st.push_back(arr[i]);
                }
                else if(arr[i]<cmp){
                    int ti=i-1;
                    while(st[ti]<arr[i]){
                        ans+=arr[i]-st[ti];
                        st[ti]=arr[i];
                        ti--;
                    }
                    st.push_back(arr[i]);
                }
            }
        }
        cout<<ans%1000000007<<endl;
    }
}
