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
#define mod 1000000007

bool check(ll i,ll j,ll n,ll m)
{	if(i<0 or j<0 or i>=n or j>=m)return 0;
	return 1; }



void solve()
{
   int n; cin>>n;
   ll mn=10e9;

   ll cnt=0,x=1,ans;

   V ar(n); For(n){ cin>>ar[i]; mn=min(mn,ar[i]); }

   for(int i=0;i<n;i++)
   {
   	  if(mn==ar[i])cnt++;
   	  if((mn&ar[i])!=mn)
   	  {
   	  	cout<<"0"; return;
   	  }
   }
   
   for(int i=1;i<n-1;i++)x=(x*i*1LL)%mod;
     ans=1LL*cnt*(cnt-1)%mod;

   cout<<(ans*x*1LL)%mod; 
   
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
