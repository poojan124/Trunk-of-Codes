#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int v[100][100],ale=0;
int sol[100][100];
int n,m,count,max1=0,ac=1;
string str[55];
void dfs(int i,int j){
    if(i<0||i>=n||j<0||j>=m)
        return;
    //cout<<"Str[i][j] = "<<str[i][j]<<"  vs  "<<(char)('A'+count)<<" "<<i<<" and "<<j<<"count = "<<count<<endl;
    if(str[i][j]!=(char)('A'+count)){
       //cout<<"break"<<endl;
       // cout<<"return for"<<i<<" and "<<j<<" "<<str[i][j]<<" "<<(char)('A'+count)<<endl;
        return;
    }
    if(v[i][j]==1)
        return;
    v[i][j]=1;
    count++;
    //sol[i][j]=count;
    if(count>max1)
        max1=count;
    dfs(i,j-1);
    dfs(i-1,j-1);
    dfs(i-1,j);
    dfs(i-1,j+1);
    dfs(i,j+1);
    dfs(i+1,j+1);
    dfs(i+1,j);
    dfs(i+1,j-1);
    count--;
}
int main()
{
    cin>>n>>m;
    int t=0;
    while(n!=0&&m!=0){
        t++;
        //string str[n];
        for(int i=0;i<n;i++)
            cin>>str[i];
        int max=-1,temp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                v[i][j]=sol[i][j]=0;
        }
        for(int i=0;i<n;i++)
        {
            count=0;
            max1=0;
            ac=1;
            ale=0;
            for(int j=0;j<m;j++)
            {
                count=0;
                if(str[i][j]=='A')
                    dfs(i,j);
                //cout<<"count in main : "<<count<<endl;
                if(max1>max)
                    max=max1;
            }
        }
        cout<<"Case "<<t<<": "<<max<<endl;
        /**for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }**/
        cin>>n>>m;

    }
    return 0;
}
