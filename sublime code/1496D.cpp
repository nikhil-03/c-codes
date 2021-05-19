#include <bits/stdc++.h>
using namespace std;
#define ll long long int

map<int,int> m;  


void fun(int l,int r,vector<int> ar,vector<int> &ans,int k)
{
	int mx=0;
	if(l>r)return;
	for(int i=l;i<=r;i++)
	{
		mx=max(mx,ar[i]);
	}
// 	cout<<mx<<" ";
	// cout<<m[mx]<<" ";
 //    cout<<k<<" "<<endl;
     ans[m[mx]]=k;
     
    fun(l,m[mx]-1,ar,ans,k+1);
    fun(m[mx]+1,r,ar,ans,k+1);
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
       m.clear();
       int n;  cin>>n;
       vector<int> ar(n); vector<int> ans(n); 
       for(int i=0;i<n;i++){cin>>ar[i]; m[ar[i]]=i; }
       fun(0,n-1,ar,ans,0);

        for(int i=0;i<n;i++)cout<<ans[i]<<" ";
   cout<<endl;
   }
  
}