#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define pb push_back

void solve()
{
	ll n; cin>>n;
	unordered_set<ll> s;
   	V ar(n+5),a(n+5); 
   	ll maxn=0,maxm=0,maxc=0;
   	for(int i=1;i<=n;i++)
   	{
   	   cin>>ar[i];
   	   maxn=max(maxn,ar[i]);
   	   a[i]=ar[i]-ar[i-1];
   	}
    ll flag=1;
    for(int i=2;i<=n;i++)s.insert(a[i]);
    	if(s.size()>2)flag=0;
        else if(s.size()==2)
        {
        	for(auto k : s)
        	{
        		if(k>0)maxc=k;
        		maxm+=abs(k);
        	}
        }
        else {cout<<0<<endl; return ; }

        if(flag==0 or maxm<=maxn){ cout<<-1<<endl; return; }
        else if(maxm==0){ cout<<0<<endl; return; }
        else cout<<maxm<<" "<<maxc<<endl;

}


int main() 
{
  int t;  cin>>t;
  while(t--)
  {
    solve(); 	 
  }
}