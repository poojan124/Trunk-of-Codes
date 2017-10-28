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
    int n;
    string temp;
    cin>>n;
    while(n!=0){
        int t,len;
        t=n;
        cin>>temp;
        len=temp.length();
        int j=0,index,var=0;
        while(len--){
            index=var+(5*j);
            if(index>=t){
                var++;
                j=0;
                index=var+(5*j);
            }
            cout<<temp[index];
            j++;
        }
    }
}
