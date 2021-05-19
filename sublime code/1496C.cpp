#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N = 999999999999;

unordered_set<ll> s;
void fun()
{
   
   for(ll i=1;i*i*i<=N;i++)
   	s.insert(i*i*i);
   
}

void solve()
{
	ll n; cin>>n;
	for(ll i=1;i*i*i<=n;i++)
	{
		if(s.count(n-i*i*i)){cout<<"YES"<<endl;
		return; }
	}
	cout<<"NO"<<endl;	
}

int main() 
{
	fun();
   int t; cin>>t;
   while(t--)
   {
       solve();
   }
}