#include<bits/stdc++.h>
#define pi 3.14159265358979323846264
#define all(c) c.begin(),c.end()
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container),element) != container.end())
#define tr(container, it) \
    for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
int N;;
vvi W;
bool cheack_graph_connected_bfs(    ){
    int start_vertex=0;
    vi V(N,false);
    queue<int> Q;
    Q.push(start_vertex);
    V[start_vertex]=true;
    while(!Q.empty()){
        int i=Q.front();
        Q.pop();
        tr(W[i],it){
            if(!V[*it]){
                V[*it]=true;
                Q.push(*it);
            }
        }
    }
    return (find(all(V),0)==V.end());
}
int main()
{
}
