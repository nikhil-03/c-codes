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
   int n; cin>>n;
   ll x=0,y=0,cnt=0;
   V ar(n); For(n){cin>>ar[i]; x=(x ^ ar[i]); }


   if(x==0){ cout<<"YES"; return; }

    For(n)
    {
    	y= (y xor ar[i]);
    	if(y==x){cnt++; y=0; }
    }



   if(cnt>1)cout<< "YES";
   else cout<< "NO";
   
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
