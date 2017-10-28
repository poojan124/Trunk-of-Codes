#include<bits/stdc++.h>
#define pi 3.14159265358979323846264
#define all(c) c.begin(),c.end()
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container),element) != container.end())
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
int main()
{
    double sum=0.0;
    for(int i=1;i<=40;i++){
        double ans=i/pow(2,i);
        sum+=ans;
        printf("%0.6lf %0.6lf\n",ans,sum);
    }
}
