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
    ll n,m; cin>>n>>m;

    int ar[n][m];
    for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    		cin>>ar[i][j];

    int a[m][n];
    for(int i=0;i<m;i++)
    	for(int j=0;j<n;j++)
    		cin>>a[i][j];
    
    int ans[n][m];

    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		for(int k=0;k<m;k++)
    		{
    			if(a[0][i]==ar[j][k])
    			{
    				for(int kk=0;kk<m;kk++)
    			    {
    				  cout<<ar[j][kk]<<" ";
    			    }
                     cout<<endl;
    			    break;
    			}

    		}
    	} 
    }
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
   	  solve();
   	  // cout<<endl;
   }
}
