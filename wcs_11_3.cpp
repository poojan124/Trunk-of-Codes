#include<bits/stdc++.h>
using namespace std;
int var;
struct col{
    int cnt;
    vector<int > v;
};
col Crt(col tmp,string s,bool f=false,bool f_=false){
    if(f==true){
        tmp.cnt = 0;
        if(f_==false)
            cout<<"+ "<<s<<endl;
        else
            var=0;
    }
    else{
        //cout<<"You come again?"<<endl;
        if(!tmp.v.empty()){
            if(tmp.v[0]!=0){
                if(f_==false)
                    cout<<"+ "<<s<<"("<<tmp.v[0]<<")"<<endl;
                else
                    var=tmp.v[0];
            }
            else{
                if(f_==false)
                    cout<<"+ "<<s<<endl;
                var=0;
            }
            tmp.v.erase(tmp.v.begin());
        }
        else{
            tmp.cnt++;
            if(f_==false)
                cout<<"+ "<<s<<"("<<tmp.cnt<<")"<<endl;
            else
                var=tmp.cnt;
        }
    }
    //cout<<"Size of v "<<tmp.v.size()<<endl;
    //cout<<"FUNCTION CALL END GEN"<<endl;
    return tmp;
}
int get_number(string s){
    if(s[s.length()-1]!=')')
        return 0;
    int i=0;
    int start,end_;
    for(int i=0;i<s.length();i++){
        if(s[i] == '(')
            start=i+1;
        else if(s[i] == ')')
            end_=i-1;
    }
    int sum=0;
    for(int i=start;i<=end_;i++)
        sum = sum*10+(s[i]-48);
    //cout<<s.length()<<endl;
    //cout<<"NUMBER IS  "<<sum<<"start"<<start<<"end"<<end_<<endl;
    return sum;
}
col Del(col obj,string s,bool f=false){
    int n=get_number(s);
    //cout<<"Size of v before "<<obj.v.size()<<endl;
    obj.v.push_back(n);
    //cout<<"Size of v after "<<obj.v.size()<<endl;
    for(int i=obj.v.size()-1;i>0;i--){
        if(obj.v[i-1] > obj.v[i]){
            int t=obj.v[i];
            obj.v[i]=obj.v[i-1];
            obj.v[i-1]=t;
        }
        else
            break;
    }
    if(f==false)
        cout<<"- "<<s<<endl;
    return obj;
}
int main()
{
    int q;
    cin>>q;
    cin.ignore();
    unordered_map<string, col> m;
    while(q--){
        string s;
        getline(cin , s);
        vector<string > sv;
        istringstream iss(s);
        string temp;
        while(iss>>temp)
            sv.push_back(temp);
        int i=0;
        for(i=0;i<sv[1].length();i++){
            if(sv[1][i]=='(')
                break;
        }
        string st(sv[1],0,i);
        //cout<<"parsed string  "<<st<<endl;
        if(sv[0] == "crt"){
            if(m.find(st)== m.end()){
                col obj;
                obj = Crt(obj,st,true);
                m[st]=obj;
            }
            else{
                m[st] = Crt(m[st],st);
            }
        }
        else if(sv[0] == "del"){
            m[st] = Del(m[st],sv[1]);
        }
        else if(sv[0] == "rnm"){
            string s1=st;
            string s2=sv[2];
            m[s1]=Del(m[s1],sv[1],true);
            if(m.find(s2)== m.end()){
                col obj;
                obj = Crt(obj,s2,true,true);
                m[s2]=obj;
            }
            else{
                m[s2] = Crt(m[s2],s2,false,true);
            }
            if(var!=0)
                cout<<"r "<<sv[1]<<" -> "<<sv[2]<<"("<<var<<")"<<endl;
            else
                cout<<"r "<<sv[1]<<" -> "<<sv[2]<<endl;
        }
    }
    return 0;
}
