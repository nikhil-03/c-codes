#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
   int n,k; cin>>n>>k;
   vector<int> ar1(n),ar2(n),dp1(n+1,0),dp2(n+1,0);
   for(int i=0;i<n;i++){ cin>>ar1[i];  dp1[i]=ar1[i]; }
   for(int i=0;i<n;i++){ cin>>ar2[i];  dp2[i]=ar2[i]; }	
   	
   	// for(auto a : dp1)cout<<a<<" "; cout<<endl;
   	// for(auto a : dp2)cout<<a<<" ";	
   	int ans=0,idx=0;
   	for(int i=1;i<n;i++)
   	{
   		dp1[i] = min( dp1[i-1]+ar1[i] , dp2[i-1]+ar1[i]+ar2[i] );
   		dp2[i] = min( dp2[i-1]+ar2[i] , dp1[i-1]+ar2[i]+ar1[i] );

   		if(dp1[i]>k and dp2[i]>k)
   		{
   			idx=i-1;
   			ans=min( dp1[i-1] , dp2[i-1] );
   			break;
   		}
   		ans = min ( dp1[i] , dp2[i] );
   		idx = i;
   	}
   	
   	cout<<idx+1<<" "<<ans;
}