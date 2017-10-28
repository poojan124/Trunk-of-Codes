#include<stdio.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> v;
        for(int i=0;i<n;i++)
        {
            string str;
            cin>>str;
            sort(str.begin(),str.end());
            v.push_back(str);
        }
        int ans;
        for(int i=0;i<n;i++)
        {
            int count =0;
            for(int j=0;j<n-1;j++)
            {
                if(v[j+1][i]>=v[j][i])
                    count++;
                else
                    break;
            }
            if(count==n-1)
                ans++;
            else
                break;
        }
        if(ans==n)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
