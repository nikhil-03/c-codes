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
    ll n,m;  cin>>n>>m;
    ll ar[n+1][m+1]; ll sum=0;
    bool vis[n+1][m+1];
    memset(vis,0,sizeof(vis));
    for(int i=1;i<=n;i++)
     {
     	for(int j=1;j<=m;j++)
     	{
     		cin>>ar[i][j];
     		sum+=ar[i][j];
     	}
     }
      ll ans=0;
     V t(4);
     for(int i=1;i<=n;i++)
     {
     	for(int j=1;j<=m;j++)
     	{
     		t[0]= ar[i][j]; 
     		t[1]= ar[n-i+1][j] ;
     		t[2]= ar[i][m-j+1] ;
     		t[3]= ar[n-i+1][m-j+1];
              sort(t.begin(),t.end());

         ans+=( abs(t[2]-ar[i][j]) );
     		
     	}
     }
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
