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
	int n; cin>>n;
	string s; cin>>s;
	bool x=0,y=0;
    For(n)
    {
      if(s[i]=='>')x=1;
      if(s[i]=='<')y=1;
    }
    if(x and y)
    {
    	int ans=0;
    	s+=s[0]; // round round
    	For(n)
    	{
    		if(s[i]=='-' or s[i+1]=='-')ans++;
    	}
    	cout<<ans; return;
    }
    cout<<n;

}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
   	  solve();
   	  cout<<endl;
   }
}
