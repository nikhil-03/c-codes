#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define rFor(n) for(int i=n-1;i>=0;i--)

int X[8]={ 1 ,-1, 0 , 0 , 1, 1 , -1 ,-1 };
int Y[8]={ 0 ,0 , 1 ,-1 , 1,-1 , -1 , 1 };


bool check(ll i,ll j,ll n,ll m)
{	if(i<0 or j<0 or i>=n or j>=m)return 0;
	return 1; }



void solve()
{
   ll n; cin>>n;
   ll ans=0;
   for(ll i=2;i<=sqrt(n);i++)
   {
   	 if(n%i==0)
   	 {
   	 	ans=(n-i) /2;
   	 	break;
   	 }
   }
   cout<<ans;
}

int main() 
{
   int t; cin>>t;
   for(int i=0;i<t;i++)
   {
   	  cout<<"Case #"<<i+1<<": ";
   	 solve();
   	 cout<<endl;
   }
}
