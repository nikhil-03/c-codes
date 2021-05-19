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
   int a=n%4,b=n/4;
   // cout<<a<<" "<<b<<"->";
   
   for(int i=0;i<n-b-1;i++)
   {
   	 cout<<9;
   }
   // cout<<" ";
   
   // a=4-a;
   if(a==0)cout<<9;
   if(a>0 and a<4)cout<<8;
    // cout<<a<< " ";




   for(int i=n-b;i<n;i++)
   	cout<<8;

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
// 1001 1001 1001 1001 1001