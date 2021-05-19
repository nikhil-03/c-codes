#include <bits/stdc++.h>
using namespace std;
#define ll long long int



int main()
{
  int t; cin>>t;
  while(t--)
  {
  	map<int,int> mp;
	int n,m; cin>>n>>m;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		int k; cin>>k;
        mp[k%m]++;
	}
	for(auto a : mp)
	{
		if(a.first==0)ans++;
		else if(2 * a.first == m)ans++;
		else if(m>2*a.first || mp.find(m-a.first)==mp.end())
		{
			int l=a.second,r=mp[m-a.first];
			ans+= 1 + max( abs(l-r)-1 , 0 );
		}
	}
	cout<<ans<<endl;  	
  }
}