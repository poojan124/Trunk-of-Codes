#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<
#include <vector>
using namespace std;
int main()
{
    long int n,k;
    scanf("%ld %ld",&n,&k);
    vector<long int> v;
    for(long int i=0;i<n;i++){
        long int temp;
        scanf("%ld",&temp);
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    long int i,j,dif,count=0;
    for(i=0;i<n;i++)
    {
        dif=k+v[i];
        vector<long int> ::iterator it1;
        it1=lower_bound(v.begin(),v.end(),dif);
        if(v[it1-v.begin()]==dif){
            count++;
        }
        if((it1-v.begin())==v.size()&&(v[it1-v.begin()]==dif))
            break;
    }
    printf("%ld",count);
}
