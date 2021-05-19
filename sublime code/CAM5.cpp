#include <bits/stdc++.h>
using namespace std;
#define ll int

bool vis[100010];


void dfs(int s,vector<ll> v[])
{
	if(vis[s])return;
	vis[s]=1;
    for(auto a : v[s])
    {
    	if(!vis[a])dfs(a,v);
    }
}

int main() 
{
   ll t; cin>>t;
   while(t--)
   {
   	for(int i=0;i<100010;i++){vis[i]=0;}

       ll stu,frnd;  cin>>stu>>frnd;
       vector<ll> v[100009];
       for(ll i=0;i<frnd;i++)
       {
       	  ll x,y; cin>>x>>y;
       	  v[x].push_back(y);
       	  v[y].push_back(x);
       }
      ll cnt=0;
     // cout<<stu<<endl;
     for(int i=0;i<stu;i++)
     {
     	if(!vis[i])
     	{
     		cnt++;
     		dfs(i,v);
     	}
     }


     	cout<<cnt<<endl;
   }
}