#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long q;
    cin>>q;
    while(q--){
        long long n;
        cin>>n;
        long long a[n+1];
        for(long long i=0;i<n;i++)
            cin>>a[i];
        long long one_cnt=0;
        long long se=0,so=0;
        long long inv_cnt=0;
        for(long long i=0;i<n;i++){
            if(i%2==0 && a[i]%2==0){
                if(a[i]>2)
                    se+=(a[i]-2);
            }
            if(i%2==1 && a[i]%2==1){
                if(a[i]>2)
                    se+=(a[i]-1);
            }
            if(i%2==0 && a[i]%2!=0){
                if(a[i]==1)
                    one_cnt++;
                inv_cnt++;
                if(a[i]>2)
                    so+=a[i]-2;
            }
            if(i%2==1 && a[i]%2!=1){
                inv_cnt++;
                so+=a[i]-1;
            }
        }
        //cout<<se<<" so : "<<so<<" cnt : "<<inv_cnt<<" 1 cnt : "<<one_cnt<<endl;
        if(inv_cnt%2!=0)
            cout<<"-1"<<endl;
        else{
            if((inv_cnt-one_cnt)<one_cnt){
                long long t=2*one_cnt-inv_cnt;
                if((so+se)>=t)
                    cout<<one_cnt<<endl;
                else{
                    cout<<"-1"<<endl;
                }
            }
            else{
                cout<<inv_cnt/2<<endl;
            }
        }
    }
    return 0;
}
