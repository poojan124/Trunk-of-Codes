#include<bits/stdc++.h>
#define mod 1000000007
int y[1000002],x[1000002];
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int m,n,sum=0,h_p=1,v_p=1;
        scanf("%d %d",&m,&n);
        for(int i=0;i<m-1;i++)
            scanf("%d",&y[i]);
        for(int i=0;i<n-1;i++)
            scanf("%d",&x[i]);
        sort(y,y+m-1);
        sort(x,x+n-1);
        int i_x=n-2,i_y=m-2;
        for(int i=0;i<n+m-2;i++){
            if(y[i_y]>x[i_x]){
                sum=(sum+(y[i_y]*v_p))%mod;
                h_p++;
                i_y--;
            }
            else{
                sum=(sum+(x[i_x]*h_p))%mod;
                v_p++;
                i_x--;
            }
        }
        printf("%d\n",sum);
    }
}
