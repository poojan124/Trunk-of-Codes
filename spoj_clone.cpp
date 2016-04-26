#include<stdio.h>
#include<unordered_map>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,len;
    scanf("%d %d",&n,&len);
    while(n!=0&&len!=0)
    {
        unordered_map<string,int> m;
        int arr[n+1]={0};
        //cout<<"?"<<endl;
        string str;
        for(int i=0;i<n;i++){
            cin>>str;
            m[str]++;
        }
        int count=0;
        int i=1;
        for(unordered_map<string,int>::iterator it=m.begin();it!=m.end();it++){
            arr[it->second]++;
            count=count+((arr[it->second])*i);
            i++;
            if(count==n)
                break;
        }

        for(int i=1;i<=n;i++)
            printf("%d\n",arr[i]);
        scanf("%d %d",&n,&len);
    }
    return 0;
}
