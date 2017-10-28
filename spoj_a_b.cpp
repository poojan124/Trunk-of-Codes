#include<stdio.h>
#include<iostream>
#include<vector>
#include <string>
using namespace std;
string s1,s2;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        cin>>s1>>s2;
        int ans[1005];
        vector<int> v1,v2;
        int i,j,l1,l2,res=0,sum=0,min_loop,max_loop,final_loop;
        l1=s1.length();
        l2=s2.length();
        min_loop =  (l1>l2) ? l2:l1;
        max_loop =  (l1>l2) ? l1:l2;
        for(i=l1-1;i>=0;i--)
        {
            int a=s1[i]-'0';
            v1.push_back(a);
        }
        for(i=l2-1;i>=0;i--){
            int b=s2[i]-'0';
            v2.push_back(b);
        }
        for(i=0;i<min_loop;i++)
        {
            int temp=res+v1[i]+v2[i];
            sum=(temp)%10;
            res=temp/10;
            ans[i]=sum;
            //printf("%d\n",ans[i]);
        }
        for(i=min_loop;i<max_loop;i++){
            if(l1>l2){
                int temp=res+v1[i];
                sum=temp%10;
                res=temp/10;
                ans[i]=sum;
            }
            if(l2>l1){
                int temp=res+v2[i];
                sum=temp%10;
                res=temp/10;
                ans[i]=sum;
            }
        }
        if(res!=0){
            ans[max_loop]=res;
            final_loop=max_loop;
        }
        else
            final_loop=max_loop-1;
        //printf("%d",lp);
        for(i=final_loop;i>=0;i--)
        {
            printf("%d",ans[i]);
        }
        printf("\n");
    }
    return 0;
}
