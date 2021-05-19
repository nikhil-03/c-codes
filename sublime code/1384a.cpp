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
   
   ll mx=0;
   V ar(n); For(n){cin>>ar[i]; mx=max(mx,ar[i]); }

   vector<vector<int>> ans(n+1,vector<int> (mx,-1));

   int k=mx,cnt=0;
   vector<int> temp;
   for(int i=0;i<mx;i++)
   {
     ans[0][i]=0;
   }
   
   for(int i=0;i<n;i++)
   {
   	  int cnt=ar[i];
   	  for(int j=0;j<cnt;j++)
   	  {
   	  	 ans[i+1][j]=ans[i][j];
   	  }
   	  for(int j=cnt;j<mx;j++)
   	  {
   	  	ans[i+1][j]=ans[i][j]+1;
   	  }

   }
  if(mx>0){
   for(int i=0;i<=n;i++)
   {
   	for(int j=0;j<mx;j++)
   	{
   		ans[i][j]=ans[i][j]%26;
   		cout<<char(ans[i][j]+97);
   	}cout<<endl;
   }  }


   // cout<<"...."<<mx;
   if(mx==0)
    {
  	int kk=0;
  	for(int i=0;i<=n;i++)
  	{
  		cout<<char((kk%26)+97)<<endl;
  		kk++;
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
