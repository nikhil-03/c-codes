#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<int> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define rFor(n) for(int i=n-1;i>=0;i--)

int gcd(int a, int b)
{
	if(b==0)return a;
	return gcd(b,a%b);
}



void solve()
{
    int n; cin>>n;
    V ar(n);
    bool vis[n]={0};
    ll mx=-1,idx=-1;
    for(int i=0;i<n;i++)
    	{
    		cin>>ar[i];
    		if(ar[i]>mx)
    		{
    			mx=ar[i]; idx=i;
    		}
    	}
   cout<<mx<<" "; 
   vis[idx]=1; 
   int cnt=0;
   while(cnt<n-1)
   {
   	  int k=-1;
   	  for(int i=0;i<n;i++)
   	  {
   	  	if(!vis[i])
   	  	{
           if(gcd(mx,ar[i])>k)
           {
           	  k=gcd(mx,ar[i]);
           	  idx=i;
           }
   	  	}
   	  }
      cout<<ar[idx]<<" ";
   	  mx=k;
   	  vis[idx]=1;
   	  cnt++;
   }
   

   
  
    

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
