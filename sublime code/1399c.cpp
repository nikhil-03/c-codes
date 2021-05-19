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
   M m,mp;
   int n; cin>>n;
   V ar(n);
   For(n){cin>>ar[i];  m[ar[i]]++; }
   sort(ar.begin(),ar.end());

    for(int i=0;i<n;i++)
    {
    	for(int j=i+1;j<n;j++)
    	{
    		mp[ar[i]+ar[j]]++;
    	}
    }
      int ans=0;
      for(auto a : mp)//cout<<a.first<<" ";
      {
         int mid=a.first;
         int i=0,j=n-1; int cnt=0;
         while(i<j)
         {
         	if(ar[i]+ar[j]==mid)
         		{ cnt++; i++; j--; }
         	else if(ar[i]+ar[j]<mid)
         		i++;
         	else j--;
         }
         // cout<<cnt<<" ";
         ans=max(ans,cnt);
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
