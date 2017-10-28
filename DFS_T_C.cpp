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
int N;//number of vertices
vvi W;//graph
vi V;//Visit flag array
void dfs(int i){
    if(!V[i]){
        V[i]=true;
        for_each(all(W[i]),dfs);
    }
}
bool check_graph_connected_dfs(){
    int start_vertex = 0;
    V=vi(N,false);
    dfs(start_vertex);
    return (find(all(V),0)==V.end());
}
int main()
{

}
