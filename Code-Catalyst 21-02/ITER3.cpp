#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k,m;
		ll count=0;
		cin>>n>>k>>m;
		ll x[n],y[n];
		for(ll e=0;e<n;e++)cin>>x[e];
		for(ll e=0;e<n;e++)
		{
		    cin>>y[e];
		    ll u=abs(x[e]-y[e]);
		    if(u>k)count++;
		}
		if(count>m)cout<<0<<endl;
		else cout<<1<<endl;
	}
	return 0;
}
