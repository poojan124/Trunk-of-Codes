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
int max(int a,int b){
    return a>b?a:b;
}
int min(int a,int b){
    return a<b?a:b;
}
int main()
{
    int n;
    bool flag=false;
    cin>>n;
    string s;
    cin>>s;
    int ans,min_cl=100,min_r=100,max_cl=-100,max_r=-100;
    int arr[10]={0};
    if(n==1){
        cout<<"NO";
        return 0;
    }
    /*if(n==2){
        if((s[0]=='0' && s[1]=='2')||(s[0]=='2'&&s[1]==0))
            cout<<"YES";
        else
            cout<<"NO";
        return 0;
    }*/
    for(int i=0;i<n;i++){
        if(s[i]=='1'||s[i]=='4'||s[i]=='7'){
            min_cl=min(min_cl,1);
            max_cl=max(max_cl,1);
        }
        if(s[i]=='2'||s[i]=='5'||s[i]=='8'){
            min_cl=min(min_cl,2);
            max_cl=max(max_cl,2);
        }
        if(s[i]=='3'||s[i]=='6'||s[i]=='9'){
            min_cl=min(min_cl,3);
            max_cl=max(max_cl,3);
        }
        if(s[i]=='1'||s[i]=='2'||s[i]=='3'){
            min_r=min(min_r,1);
            max_r=max(max_r,1);
        }
        if(s[i]=='4'||s[i]=='5'||s[i]=='6'){
            min_r=min(min_r,2);
            max_r=max(max_r,2);
        }
        if(s[i]=='7'||s[i]=='8'||s[i]=='9'){
            min_r=min(min_r,3);
            max_r=max(max_r,3);
        }
        if(s[i]=='0'){
            flag=true;
            max_r=4;
        }
    }
    //cout<<max_cl<<max_r<<min_cl<<min_r;
    if(flag==false){
        if(abs(max_cl-min_cl) ==2 && abs(max_r-min_r)==2)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else{
        //cout<<"here"<<endl;
        if(abs(max_r-min_r)==3)
            cout<<"YES";
        else
            cout<<"NO";
    }
    return 0;

}

