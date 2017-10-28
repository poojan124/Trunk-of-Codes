#include<stdio.h>
#include<vector>
#include<algorithm>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int arr[70000],n,i,j,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    vector<long long> l_sum,r_sum;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(c=0;c<n;c++)
            {
                long long sum=(arr[i]*arr[j])+arr[c];
                l_sum.push_back(sum);
                if(arr[i]!=0)
                {
                    long long sum2=arr[i]*(arr[j]+arr[c]);
                    r_sum.push_back(sum2);
                }
            }
        }
    }
    sort(l_sum.begin(),l_sum.end());
    sort(r_sum.begin(),r_sum.end());
    long long ans=0;
    vector<long long> :: iterator it;
    /*for(it=l_sum.begin();it!=l_sum.end();)
    {
        long long temp=l_sum[i];
        cout<<i<<"  "<<temp<<"  "<<l_sum.size()<<endl;
        vector<long long> :: iterator l_l_b,l_u_b,r_l_b,r_u_b;
        l_l_b=lower_bound(l_sum.begin(),l_sum.end(),temp);
        l_u_b=upper_bound(l_sum.begin(),l_sum.end(),temp);
        r_l_b=lower_bound(r_sum.begin(),r_sum.end(),temp);
        r_u_b=upper_bound(r_sum.begin(),r_sum.end(),temp);

        if((l_u_b- l_l_b)>(r_u_b - r_l_b))
            ans=ans+((r_u_b -r_l_b));
        else
            ans=ans + ((l_u_b-l_l_b));
        l_u_b =(l_u_b - l_sum.begin());
        it=l_u_b;
    }*/
    for(it=l_sum.begin();it!=l_sum.end();){
        //cout<<l_sum[it-l_sum.begin()]<<endl;
        vector<long long>::iterator it1 = upper_bound(l_sum.begin(),l_sum.end(),l_sum[it-l_sum.begin()]),it2=lower_bound(l_sum.begin(),l_sum.end(),l_sum[it-l_sum.begin()]);
        vector<long long>::iterator it3 = upper_bound(r_sum.begin(),r_sum.end(),l_sum[it-l_sum.begin()]),it4=lower_bound(r_sum.begin(),r_sum.end(),l_sum[it-l_sum.begin()]);
        //cout<<it1-l_sum.begin()<<" "<<it2-l_sum.begin()<<" "<<it3-r_sum.begin()<<" "<<it4-r_sum.begin()<<" "<<endl;
        if((it1-it2)<(it3-it4)&&(it3-it4)!=0&&(it1-it2)!=0)
            ans=ans+((it3-it4)*(it1-it2));
        else if((it1-it2)!=0&&(it3-it4)!=0)
            ans=ans+((it3-it4)*(it1-it2));
        it=it1;
        //cout<<"it1 : "<<it1-l_sum.begin()<<endl;
    }
    printf("%lld",ans);
    return 0;
}
