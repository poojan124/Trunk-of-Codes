#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{

    int n,count=0;
    cin>>n;
    string str;
    char temp;
    cin>>str;
    temp=str[0];
    for(int i=1;i<n;i++)
    {
        if(str[i]!=temp){
            temp=str[i];
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
