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
   long long n,i;
		cin>>n;
		for(i=n;;i++)
		{
			long long x=i;
			while(x)
			{
				if(x%10==0||i%(x%10)==0)
					x/=10;
				else break;
			}
			if(!x)break;
// 			cout<<i<<endl;
		}
		cout<<i;  
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
