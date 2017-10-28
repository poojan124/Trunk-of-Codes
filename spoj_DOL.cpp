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
    cin>>t;
    int no=1;
    while(t--){
        long long n,ans=1,f=0;
        cin>>n;
        while(n%2==0){
            n=n/2;
        }
        cout<<"Case "<<no++<<": "<<n<<endl;
    }
    return 0;
}
