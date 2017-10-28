#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
int p[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
bool gcd(long long int a,long long int b){
    int count=0;
    for(int i=0;i<15;i++){
        if(a%p[i]==0&&b%p[i]==0)
        {
            count++;
            long long int temp1=a;
            long long int temp2=b;
            a=a/p[i];
            b=b/p[i];
            //printf("%ld %ld\n",a,b);
            if(a%p[i]==0&&b%p[i]==0)
            {
                count++;
                //printf("enter\n");
            }
            a=temp1;
            b=temp2;
        }

        if(count>1)
            break;
    }
    //printf("Coutn = %ld\n",count);
    if(count==1||count==0)
        return true;
    else
        return false;

}
bool is_p(long long int n){
    for(int i=0;i<15;i++){
        if(p[i]==n)
            return true;
    }
    return false;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int ans=0,ccount=0,n,i,j,temp,pcount=0;
        vector<long long int> comp;
        scanf("%lld",&n);
        j=0;
        for(i=0;i<n;i++)
        {
            //printf("enter?\n");
            scanf("%lld",&temp);
            if(is_p(temp)==true||temp==1)
                pcount++;
            else
            {
                comp.push_back(temp);
                ccount++;
            }
        }

        ans=ans+(pcount*n)+(ccount*pcount);
        //printf("%ld %ld %ld\n",pcount,ccount,ans);
        if(ccount>1)
        {
            for(i=0;i<comp.size()-1;i++)
            {
                for(j=i+1;j<comp.size();j++)
                {
                    //printf("enter\n");
                    if(gcd(comp[i],comp[j])==true){
                            printf("pair : %ld %ld\n",comp[i],comp[j]);
                        ans++;
                        ans++;
                    }
                }
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
