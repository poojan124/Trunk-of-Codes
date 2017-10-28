#include<bits/stdc++.h>
#define pi 3.14159265358979323846264
#define all(c) c.begin(),c.end()
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container),element) != container.end())
#define pb push_back
#define sc scanf
#define P printf
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
int main()
{
    int t;
    sc("%d",&t);
    while(t--){
        int n;
        sc("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
            sc("%d",&n);
        int a1[n/2],a2[n/2];
        for(int i=0;i<n/2;i++)
            a1[i]=a[i];
        for(int i=n/2;i<n;i++)
            a2[i-(n/2)]=a[i];


    }
}
