#include<bits/stdc++.h>
using namespace std;
int a_[1000006];
int b_[1000006];
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    memset(a_,0,sizeof(a_));
    memset(b_,0,sizeof(b_));
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        a_[a[i]]++;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
        b_[b[i]]++;
    }
    int max_=0;
    int ans=0;
    for(int i=0;i<n;i++){
        int t=a[i];
        int obm=0,oba=0;
        for(int i=1;i*i<=t;i++){
            if(t%i==0){
                if(b_[t/i]>0){
                    if(max_<(t/i)){
                        max_=t/i;
                        ans=t+(t/i);
                    }
                    else if(max_==t/i && ans<(a[i]+(t/i)))
                        ans=(t/i)+a[i];
                }
                else if(b_[i]>0){
                    obm=i;
                    oba=i+a[i];
                }
                break;
            }
        }
        if(obm>max_){
            ans=oba;
            max_=obm;
        }
    }
    for(int i=0;i<n;i++){
        int t=b[i];
        int obm=0,oba=0;
        for(int i=1;i*i<=t;i++){
            if(t%i==0){
                if(a_[t/i]>0){
                    if(max_<(t/i)){
                        max_=t/i;
                        ans=t+(t/i);
                    }
                    else if(max_==t/i && ans<(b[i]+(t/i)))
                        ans=(t/i)+b[i];
                }
                else if(a_[i]>0){
                    obm=i;
                    oba=i+b[i];
                }
                break;
            }
        }
        if(obm>max_){
            ans=oba;
            max_=obm;
        }
    }
    printf("%d",ans);
    return 0;
}
