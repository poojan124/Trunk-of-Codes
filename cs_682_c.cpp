#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
ll cnt,p,c,n,a[2000005],dp[2000005],i;
vector< pair< ll ,ll > >v[2000005];


ll dfs(ll x,ll pa)
{
	ll ans = 0,i;
	for(i=0;i<v[x].size();i++)
	{
		if(v[x][i].first!=pa)
		{
			ans = ans + dfs(v[x][i].first,x);

		}
	}
	dp[x] = ans;
	cout<<x<<","<<dp[x]<<"   ";
	return ans+1;

}
ll dfs1(ll x,ll pa,ll ma)
{
	//cout<<x<<
	if(ma<0)ma=0;


	ll ans = 0;
	for(ll i=0;i<v[x].size();i++)
	{
		if(v[x][i].first==pa)continue;
		ans += dfs1(v[x][i].first,x,ma+v[x][i].second);
	}
    cout<<ma<<" "<<a[x]<<" "<<dp[x]<<" "<<cnt<<endl;
	if(ma>a[x]){
		cnt+=dp[x]-ans;
		cnt+=1;
		return 1+dp[x];

	}
	return ans;

}

int main()
{
	cin>>n;
	for(i=1;i<=n;i++)cin>>a[i];

	for(i=1;i<=n-1;i++)
	{
		cin>>p>>c;
		v[i+1].push_back(make_pair(p,c));
		v[p].push_back(make_pair(i+1,c));

	}

	dfs(1,-1);

	dfs1(1,-1,0);

	cout<<cnt;

	return 0;
}
