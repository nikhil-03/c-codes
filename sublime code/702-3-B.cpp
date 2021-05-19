#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back

void solve()
{
   int n; cin>>n;
   V ar(3);
   for(int i=0;i<n;i++)
   {
   	  ll x; cin>>x;
   	  ar[x%3]++;
   }
   ll ans=0;
   // cout<<ar[0]<<" "<<ar[1]<<" "<<ar[2]<<" "<<ans<<endl;
   int sum=(ar[0]+ar[1]+ar[2])/3;
   // cout<<sum<<endl;
   if(ar[2]<sum)
   {
   	  ar[1]=ar[1]-( sum-ar[2] );
   	  ans+=(sum-ar[2]);
   	  ar[2]=sum;
   }
   else if(ar[2]>sum)
   {
   	  ar[0]=ar[0]+(ar[2]-sum);
   	  ans+=(ar[2]-sum);
   	  ar[2]=sum;
   }
   if(ar[0]>ar[1])ans+=(sum-ar[1]);
   else ans+=(2*(ar[1]-sum));
   
   // cout<<ar[0]<<" "<<ar[1]<<" "<<ar[2]<<" "<<ans<<endl;
   cout<<ans;
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