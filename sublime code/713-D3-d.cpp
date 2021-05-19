#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back

int solve()
{
    int n; cin>>n;
    map<int,int> m;
    V ar(n+2);
    for(int i=0;i<n+2;i++){cin>>ar[i]; m[ar[i]]++; }
     sort(ar.begin(),ar.end());
    ll sum=0;
    for(int i=0;i<n;i++)sum+=ar[i];
    	// cout<<sum<<"-"<<ar[n]<<"-"<<ar[n+1]<<endl;
    	// cout<<sum<<endl;
        if(sum>ar[n] and sum>ar[n+1])return -1;
    	if(sum==ar[n] or sum==ar[n+1])
    	{
    	 for(int i=0;i<n;i++)cout<<ar[i]<<" "; 
    	 return 1; 
        }
        if(sum<ar[n+1])
        {
        	sum+=ar[n];
        	int xx=sum-ar[n+1];
        	if(m[xx]>0)
        	{
        		int f=1;
                for(int i=0;i<n+1;i++)
                {
                   if(f>0 and ar[i]==xx) {f--; continue; }   
                   else cout<<ar[i]<<" ";            
                }
        		return 1;
        	}
        	else return -1;
        }
      // int k1=ar[n]-sum,k2=ar[n+1]-sum;
      // cout<<k1<<" "<<k2<<endl;

      // if(m[k1]>0 or m[k2]>0)return 1;
       return -1;
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
   	  if(solve()==-1)cout<<-1;

   	  cout<<endl;
   }
}