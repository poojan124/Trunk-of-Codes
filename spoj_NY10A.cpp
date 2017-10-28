#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        string arr_s[]={"TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT","HHH"};
        int arr_i[8]={0},n;
        string s;
        cin>>n;
        cin>>s;
        printf("%d ",n);
        for(int i=0;i<8;i++){
            int cnt=0;
            size_t t=s.find(arr_s[i]);
            while(t!=string::npos){
                cnt++;
                t=s.find(arr_s[i],t+1);
            }
            printf("%d ",cnt);
        }
        printf("\n");
    }
}
