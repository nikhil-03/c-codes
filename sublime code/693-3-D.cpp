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
   V ar(n); for(int i=0;i<n;i++)cin>>ar[i];
   sort(ar.rbegin(),ar.rend());
   ll ans=0;
   for(int i=0;i<n;i++)
   {
   	  if(i%2==0) // alice ki bari
   	  {
   	  	 if(ar[i]%2==0)
   	  	 {
   	  	 	ans+=ar[i];
   	  	 }
   	  }
   	  else // bob ki baro
   	  {
        if(ar[i]%2==1)
        {
            ans-=ar[i];
        }
   	  }	 
   }
   if(ans==0)cout<<"Tie";
   else if(ans>0)cout<<"Alice";
   else cout<<"Bob";
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