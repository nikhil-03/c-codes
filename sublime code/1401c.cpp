#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define rFor(n) for(int i=n-1;i>=0;i--)

ll gcd(ll a,ll b)
{
   if(b==0)return a;
   return gcd(b,a%b);
}

void solve()
{
   ll n; cin>>n;  
   V a(n),b(n); ll mn=10e9;
   For(n){cin>>a[i]; b[i]=a[i]; mn=min(mn,a[i]); }
   sort(a.begin(),a.end());
   
   // cout<<mn<<endl;
   // For(n)cout<<a[i]<<" "; cout<<endl;
   // For(n)cout<<b[i]<<" "; cout<<endl;


   For(n)
   {
   	  if(a[i]!=b[i] and b[i]%mn>0)

   	    {
   	    	{cout<<"NO"; return;}
   	    }
   }
   cout<<"YES";

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
