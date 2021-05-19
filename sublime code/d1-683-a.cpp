#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<pair<ll,ll>>
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)

void solve()
{
   ll n,w;  cin>>n>>w;
   ll sum=0;
   V ar(n); For(n){cin>>ar[i].first; sum+=ar[i].first; ar[i].second=i+1; }
    // sort(ar.begin(),ar.end());
    sum=0;
    // if(ar[0].first>w){ cout<<-1; return; }
    vector<ll> aa;
    For(n)
    {
    	if(ar[i].first<=w and ar[i].first>=(w+1)/2)
    	{
            sum=ar[i].first;
            aa={i+1};
            break;
    	}
    	else if(ar[i].first<(w+1)/2)
    	{
           sum+=ar[i].first;
           aa.pb(ar[i].second);

           if(sum<=w and sum>=(w+1)/2)break;
          
        }
    }
    if(sum<(w+1)/2){cout<<-1; return;}
   sort(aa.begin(),aa.end());
   cout<<aa.size()<<endl;
   For(aa.size())cout<<aa[i]<<" ";
    	
    	
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
