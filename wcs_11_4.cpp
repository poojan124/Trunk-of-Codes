#include<bits/stdc++.h>
using namespace std;
vector<int > g[50000+5];
void update(int x,int y,int n,bool f=                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             ){
    for(int i=1;i<=n;i++){
        if(!g[i].empty() && i!=x){
            if(binary_search(g[i].begin(),g[i].end(),x) && !(binary_search(g[i].begin(),g[i].end(),y))){
                cout<<"Something happened here!"<<endl;
                g[i].push_back(y);
                for(int c=g[i].size()-1;c>0;c--){
                    if(g[i][c-1]>g[i][c])
                        swap(g[i][c-1],g[i][c]);
                    else
                        break;
                }
                cout<<"Did it make it through?"<<endl;
            }
        }
    }
    g[x].push_back(y);
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        update(x,y,n);
    }
    for(int i=1;i<=n;i++){
        cout<<"Title :"<<endl;
        if(!g[i].empty()){
            for(auto& x:g[i]){
                cout<<x<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
