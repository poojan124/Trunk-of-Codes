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
int fact(int n){
    if(n==0)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("1.000000");
    }
    else{
        int no=fact(n);
        vi v(a,a+n);
        sort(all(v));
        int cnt=1;
        for(int j=0;j<n-1;j++){
            if(v[j]==v[j+1])
                cnt++;
            else{
                no=no/fact(cnt);
                cnt=1;
            }
        }
        no=no/fact(cnt);
        //printf("%d\n",no);
        int i=1;
        double sum=0,presum=1,curr,p;
        p=1.0/no;
        while((sum-presum)!=0.000000){
            curr=i*p*pow(1-p,i-1);
            presum=sum;
            sum+=curr;
            i++;
            //printf("%0.6lf %0.6lf  %0.6lf  %0.6lf\n",sum,presum,curr,p);
            /*if(i==40)
                break;*/
        }
        printf("%0.6lf",sum);
    }
}
