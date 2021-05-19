#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
   ll n,m,k; cin>>n>>m>>k;
   vector<int> apli(n),apt(m);
   for(int i=0;i<n;i++)cin>>apli[i];
   for(int i=0;i<m;i++) cin>>apt[i];
   	sort(apli.begin(),apli.end());
    sort(apt.begin(),apt.end());
    
    ll i=0,j=0,ans=0;
    while(i<n and j<m)
    {
    	if(abs(apli[i]-apt[j])<=k){ i++; j++; ans++; }
    	else if(apli[i]<apt[j])i++;
    	else j++;
    }
   cout<<ans;
   // for(auto a : apli)cout<<a<<" "; cout<<endl;
   // 	for(auto a : apt)cout<<a<<" ";
}