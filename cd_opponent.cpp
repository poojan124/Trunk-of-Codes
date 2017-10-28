#include<bits/stdc++.h>
#define pi 3.14159265358979323846264
#define all(c) c.begin(),c.end()
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container),element) != container.end())
#define pb push_back
#define mp make_pair
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
    int n,d,ans=0,final_ans=0;
    cin>>n>>d;
    while(d--){
        string s;
        bool flag=false;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]!='1'){
                flag=true;
                break;
            }
        }
        if(flag==true){
            ans++;
            final_ans=max(final_ans,ans);
        }
        else{
            final_ans=max(final_ans,ans);
            ans=0;
        }
    }
    cout<<final_ans;
}

