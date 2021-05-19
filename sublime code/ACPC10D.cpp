#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
	ll t=1;
	while(1)
	{
		int n,mn; cin>>n;
		if(n==0)break;
		vector<vector<ll>> ar(n,vector<ll>(3,0));
        
        for(int i=0;i<3;i++)cin>>ar[0][i];
        ar[0][2]+=ar[0][1];
    
        for(int i=0;i<3;i++)cin>>ar[1][i];
        ar[1][0]+=ar[0][1];
        mn=min(min(ar[0][1],ar[0][2]),ar[1][0]);
        ar[1][1]+=mn;
        mn=min(min(ar[0][1],ar[0][2]),ar[1][1]);
        ar[1][2]+=mn;
        for(int i=2;i<n;i++)
        {
        	cin>>ar[i][0]>>ar[i][1]>>ar[i][2];
        	ar[i][0]+=min(ar[i-1][0] , ar[i-1][1] );
        	ar[i][1]+=min(ar[i][0] , min(ar[i-1][0], min(ar[i-1][2] , ar[i-1][1] ) ) );
        	ar[i][2]+=min(ar[i][1] , min( ar[i-1][1],ar[i-1][2] ) );
        }
        
        cout<<t++<<". "<<ar[n-1][1]<<"\n";
        // for(int i=0;i<n;i++)
        // {
        // 	for(int j=0;j<3;j++)
        // 	{
        // 		cout<<ar[i][j]<<" ";
        // 	} cout<<endl;
        // }
	}
}
int main() 
{
   solve();
}
