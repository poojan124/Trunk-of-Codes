#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    float a[n];
    float t=n-k+1;
    float w=0;
    float s=0;
    for(int i=0;i<n;i++)
       scanf("%f",&a[i]);
    for(int i=0;i<k;i++)
        w+=a[i];
    s+=w;
    for(int i=k;i<n;i++){
        w=w+a[i]-a[i-k];
        s+=w;
    }
    printf("%0.10f",s/t);
    return 0;
}
