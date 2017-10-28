#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[k+1];
    for(int i=0;i<k;i++)
        cin>>a[i];
    sort(a,a+n);
    int flag = 0;
    //cout<<a[k-1]<<endl;
    if(k==2 && a[k-1]!=n)
        flag = 0;
    else{
        for(int i=0;i<=k-3;i++)
            if((a[i]+2)==(a[i+1]+1) && (a[i+1]+1)==(a[i+2]))
                flag = 1;
    }
    cout<<a[k-1]<<" "<<n<<endl;
    if(a[k-1]==n)
        flag=1;
    cout<<flag<<endl;
    if(flag)
        printf("NO");
    else
        printf("YES");
    return 0;
}
