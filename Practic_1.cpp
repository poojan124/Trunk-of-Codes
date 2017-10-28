#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    pair<int ,int > p[10];
    int a,b;
    a=1;
    b=10;
    vector<pair<int ,int>> v_pairs;
    for(int i=0;i<10;i++)
    {
        p[i].first=a;
        p[i].second=b;
        v_pairs.push_back(p[i]);
        a++;
        b--;
    }
    for(int i=0;i<10;i++)
        printf("( %d, %d )\n",v_pairs[i].first,v_pairs[i].second);
    return 0;
}
