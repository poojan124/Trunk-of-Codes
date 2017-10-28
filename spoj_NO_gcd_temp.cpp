#include<bits/stdc++.h>
using namespace std;
long int p[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
long int fac[200]={0};
void create(){
    int i,j,temp=0;
    for(i=0;i<15;i++){
        for(j=i;j<15;j++){
            fac[temp]=p[i]*p[j];
            temp++;
        }
    }
}
bool gcd(long int a,long int b){
    int count=0;
    for(int i=0;i<15;i++){
        if(a%p[i]==0&&b%p[i]==0)
        {
            count++;
            long int temp1=a;
            long int temp2=b;
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
bool is_p(long int n){
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
        long int ans=0,ccount=0,n,arr[100001],i,j,temp=0,pcount=0;
        vector<long int> comp;
        scanf("%ld",&n);
        for(i=0;i<n;i++)
        {
            //printf("enter?\n");
            scanf("%ld",&arr[i]);
            if(is_p(arr[i])==true||arr[i]==1)
                pcount++;
            else
            {
                comp.push_back(arr[i]);
                ccount++;
            }
        }
        ans=ans+(pcount*n)+(ccount*pcount);
        //printf("%ld %ld %ld\n",pcount,ccount,ans);
        long int tempc=0;
        if(ccount>1)
        {
            for(i=0;i<200;i++)
            {
                if(fac[i]!=0){
                    for(j=0;j<comp.size();j++)
                    {
                        if(comp[j]%fac[i]==0)
                        {
                            tempc++;
                        }
                    }
                }
                else{
                    break;
                }
            }
        }
        printf("%ld\n",ans);
    }
    return 0;
}
