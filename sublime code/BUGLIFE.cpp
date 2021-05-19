#include <bits/stdc++.h>
using namespace std;
#define ll long long int

// bool vis[100010];
vector<int> color(100010,0);
bool k=0;
// 0 not colr  //1 boy //2 girl

bool dfs(int s , vector<int> v[])
{
   bool res=1;
   for(int a : v[s])
   {
   	 if(color[a]==color[s])return 0;
   	 if(color[a]==0)
   	 {
   	 	color[a]=color[a]-color[s];
   	 	res = res and dfs(a,v);
   	 }
   }
   return res;
}

int main() 
{
   int t; cin>>t;
   for(int tt=0;tt<t;tt++)
   {
   	cout<<"Scenario #"<<tt+1<<":"<<endl;
   	  // memset(vis,0,sizeof(vis));
   	  for(int i=0;i<=100010;i++)color[i]=0;
      ll bu,in; cin>>bu>>in; bool done=0;
      vector<int> v[100010];
      for(int i=0;i<in;i++)
      {
         ll x,y; cin>>x>>y;
         v[x].push_back(y);
         v[y].push_back(x);
      }
      for(int i=1;i<=bu;i++)
       {
       	 if(color[i]==0)
       	 {
       	 	color[i]=1;
       	 	int x=dfs(i,v);
       	    if(!x){ done=1; cout<<"Suspicious bugs found!"<<endl; break; }
       	 }
       }
       if(!done)cout<<"No suspicious bugs found!"<<endl;
       // for(int i=1;i<=bu;i++)cout<<color[i]<<" "; cout<<endl;
   }
}