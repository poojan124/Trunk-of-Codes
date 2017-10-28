#include<bits/stdc++.h>
using namespace std;
int x[100005][2];
int y[100005][2];
pair<long long ,long long> check(long long f,long long b,long long d){
    long long r1=-1,r2=-1;
    float r11=-1,r22=-1;
    if(b*b>4*f){
        r1=(b+sqrt(b*b - 4*f))/2;
        r2=(b-sqrt(b*b - 4*f))/2;

        r11=(b+sqrt(float(b*b - 4*f)))/(2.0);
        r22=(b-sqrt(float(b*b - 4*f)))/(2.0);
        //cout<<"r1 "<<r1<<" r11 "<<r11<<endl;
        //cout<<"r2 "<<r1<<" r22 "<<r22<<endl;
    }
    pair<long long,long long> p;
    p.first = -1;
    p.second = -1;
    if((r1-r11==0)&&(r1<=d)&&(r1>0))
        p.first=r1;
    if((r2-r22==0)&&(r2<=d)&&(r2>0))
        p.second=r2;
    return p;
}
int main()
{
    long long q;
    cin>>q;
    while(q--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        long long ans=0;
        for(int i=0;i<100005;i++){
            x[i][0]=0;
            y[i][0]=0;
            x[i][1]=0;
            y[i][1]=0;
        }
        //cout<<ans<<endl;
        for(long long i=1;i<=c;i++){
            long long fac=i*(i-a);
            //cout<<"Fac1 "<<fac<<endl;
            pair<long long,long long> che = check(fac,b,d);
            assert(che.first>d);
            assert(che.second>100004);
            assert(che.second>d);
            asser(che.second>100004);
            if(che.first!=-1 && x[i][che.first]!=1){
                x[i][che.first]=1;
                ans++;
            }
            if(che.second!=-1 && x[i][che.second]!=1){
                x[i][che.second]=1;
                ans++;
            }

        }
        for(long long i=1;i<=d;i++){
            long long fac=i*(i-b);
            //cout<<"Fac1 "<<fac<<endl;
            pair<long long,long long> che = check(fac,a,c);
            assert(che.first>c);
            assert(che.second>100004);
            assert(che.second>c);
            asser(che.second>100004);

            if(che.first!=-1 && x[che.first][i]!=1){
                x[che.first][i]=1;
                ans++;
            }
            if(che.second!=-1 && x[che.second][i]!=1){
                x[che.second][i]=1;
                ans++;
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}
