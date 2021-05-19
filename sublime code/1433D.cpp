#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define rFor(n) for(int i=n-1;i>=0;i--)

void solve()
{
   ll n; cin>>n;
   V ar(n); M m;
   bool vis[n]={0};
   For(n){cin>>ar[i]; m[ar[i]]=i; }
   if(m.size()==1){ cout<<"NO"<<endl; return; }
   V temp;
   for(auto a : m)
   {
   	  temp.pb(a.second);
   }
   cout<<"YES"<<endl;
   for(int i=0;i<m.size()-1;i++)
   {
   	  cout<<temp[i]+1<<" "<<temp[i+1]+1<<endl;
   	  vis[temp[i]]=1; vis[temp[i+1]]=1;
   }
  For(n)
  {
  	if(!vis[i])
  	{
  		cout<<i+1<<" ";
  		ll k=ar[i];
  		For(n)
  		{
  			if(vis[i] and k!=ar[i]){cout<<i+1<<endl; break; }
  		}
  		vis[i]=1;
  	}
  }


}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
   	  solve();
   	  // cout<<endl;
   }
}
