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
    cout<<2<<endl;
		cout<<n<<" "<<n-1<<endl;
		
		for(int i=n-2;i>0;i--)
		cout<<i<<" "<<i+2<<endl;
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
