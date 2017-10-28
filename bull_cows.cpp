#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int p1,p2,p3,p4,p5,cnt=5;
    cout<<"First no 1234"<<endl;
    cout<<"Enter your ans : "<<endl;
    cin>>p1;
    cout<<"Second no 5678"<<endl;
    cout<<"Enter your ans : "<<endl;
    cin>>p2;
    cout<<"third no 0912"<<endl;
    cout<<"Enter your ans : "<<endl;
    cin>>p3;
    cout<<"fourth no 0934"<<endl;
    cout<<"Enter your ans : "<<endl;
    cin>>p4;
    if(p1==4){
        cout<<"Any 1 combination of 1234"<<endl;
        return 0;
    }
    if(p2==4){
        cout<<"Any 1 combination of 5678"<<endl;
        return 0;
    }
    if(p3==4){
        cout<<"Any 1 combination of 0912"<<endl;
        return 0;
    }
    if(p4==4){
        cout<<"Any 1 combination of 0934"<<endl;
        return 0;
    }
    p5=(abs(p3+p4-p1))/2;
    if(p5==2){

    }
    if(p5==0){

    }
    if(p5==1){
        int temp1,temp2;
        cout<<"Guess will be 1230"<<endl;
        cout<<"enter your ans"<<endl;
        cin>>temp1;
        cout<<"Guess will be 1239"<<endl;
        cout<<"enter your ans"<<endl;
        cin>>temp2;
        if(temp1>temp2){
            v.push_back(0);
        }
        else{
                v.push_back(9);
        }
        if(p1!=0){
            int a[5];
            for(int i=1;i<=4;i++){
                cout<<"guess will be"<<v[0]<<i<<4<<5<<endl;
                cout<<"Enter your ans : "<<endl;
                cin>>a[i-1];
            }
            int ans=a[0],tc=0;
            for(int i=1;i<=3;i++){
                if(a[i]>ans){
                    ans=a[i];
                }
            }
            for(int i=0;i<4;i++){
                if(a[i]==ans){
                    v.push_back(i+1);
                }
            }
        }
        if(p2!=0){
            int a[5];
            for(int i=5;i<=8;i++){
                cout<<"guess will be"<<v[0]<<i<<1<<3<<endl;
                cout<<"Enter your ans : "<<endl;
                cin>>a[i-1-4];
            }
            int ans=a[0],tc=0;
            for(int i=1;i<=3;i++){
                if(a[i]>ans){
                    ans=a[i];
                }
            }
            for(int i=0;i<4;i++){
                if(a[i]==ans){
                    v.push_back(i+1+4);
                }
            }
        }
        cout<<"your no will be combination of "<<v[0]<<v[1]<<v[2]<<v[3];
    }
}
