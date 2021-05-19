#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back

void solve()
{
   int n,m; cin>>m>>n;
   ll ar[m][n];
   ll c1=0,c2=0,sum=0,mn=INT_MAX;
   for(int i=0;i<m;i++)
   {
   	 for(int j=0;j<n;j++)
   	 {
       cin>>ar[i][j];
       ll x=ar[i][j];
       // cout<<x<<" ";
       if(x==0)c1++;
       if(x<0)c2++;
       sum+=abs(x);
       mn=min(mn,abs(x));
   	 }
   }
   // cout<<c1<<" "<<c2<<" "<<mn<<endl;
   if((c1+c2)%2==0)cout<<sum;
   else cout<<sum-mn*2;
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
