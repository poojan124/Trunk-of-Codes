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
    long long int n;
    cin>>n;
    long long int arr[]={4,20,42,145,89,58,37,16},cnt=0;
    vector<long long> v(arr,arr+8);
    while(1){
        cnt++;
        long long int temp=n,ans=0;
        while(temp>0){
            long long int dig;
            dig=temp%10;
            ans=ans+(dig*dig);
            temp=temp/10;
        }
        n=ans;
        if(find(all(v),n)!=v.end()){
            printf("-1");
            break;
        }
        if(n==1){
            cout<<cnt;
            break;
        }
    }
}

