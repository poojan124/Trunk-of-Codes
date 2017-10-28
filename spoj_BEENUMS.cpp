#include<bits/stdc++.h>
#define all(c) c.begin,c.end()
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container),element) != container.end())
#define tr(container, it) \
    for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)

using namespace std;
int main()
{
    long long n1;
    cin>>n1;
    while(n1!=-1){
        long long n;
        n=((4*n1)-1)/3;
        if(sqrt(n)==floor(sqrt(n)))
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
        cin>>n1;
    }
}
