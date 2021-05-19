#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<bool> prime(10001,1);
vector<int> par;
vector<int> ar[10001];


 bool isvalid(int a ,int b)
 {
 	int c=0;
 	while(a)
 	{
 		if(a%10 != b%10)c++;
 		a=a/10; b=b/10;
 	}
 	if(c==1)return 1;
 	return 0;
 }
void bfs(int s,vector<int> &dist,vector<bool> &vis)
{
	// cout<<s<<endl;
	dist[s]=0;
	vis[s]=1;
	queue<int> q;
	q.push(s);
	while(!q.empty())
	{
		int p=q.front(); q.pop();
		for(int a : ar[p])
		{
			// cout<<a<<endl;
			if(!vis[a])
			{
				vis[a]=1;
				dist[a]=dist[p]+1;
				q.push(a);
			}
		}
	}
}
int main() 
{
   int t; cin>>t;
   
   prime[0]=prime[1]=false;
   for(int i=2;i*i<=10000;i++)
   {
      if(prime[i])
      	for(int j=i*i;j<=10000;j=j+i)
      	{
      		prime[j]=0;
      	}
   }
   for(int i=1000;i<=9999;i++)
   {
   	 if(prime[i]){par.push_back(i);   }
   }
   for(int i=0;i<par.size();i++)
   {
   	for(int j=i+1;j<par.size();j++)
   	{
       if(isvalid(par[i],par[j]))
       {
         ar[par[i]].push_back(par[j]);
         ar[par[j]].push_back(par[i]);
       }
   	}
   }
    while(t--)
    {
       int x,y; cin>>x>>y;
       vector<int> dist(10000,-1);
       vector<bool> vis(10000,0);
      bfs(x,dist,vis);
      if(dist[y]==-1)cout<<"Impossible"<<endl;
      else cout<<dist[y]<<endl;
      // for(int i=1000;i<=9999;i++)cout<<dist[i]<<endl;
    }
}