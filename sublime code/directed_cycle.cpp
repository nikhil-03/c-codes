#include<bits/stdc++.h>
using namespace std;

int start; int eng;
vector<int> adj[100];
vector<int> flag(100,0);
vector<int> parent(100,-1);

bool dfs(int s)
{
    flag[s]=1;
     for(int a : adj[s])
     {
         if(flag[a]==0)
         {
         	flag[a]=1;
         	parent[a]=s;
        	if(dfs(a))return true;
         }
         else if(flag[s]==1)
         {
           start=s;   eng=a;
           return true;
         }
     }
     
     flag[s]=2;
     return false;
}


int main()
{
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
       int x,y; cin>>x>>y;
       adj[x].push_back(y);
    }
    start=-1;

     for(int i=1;i<=n;i++)
     {
     	if(flag[i]==0 and dfs(i))
     		break;
     }

    if(start==-1)cout<<"No cycle";
    else cout<<"Cycle";

    vector<int> temp;
    temp.push_back(start);
      for(int x=eng;x!=start;x=parent[x])
      {
      	 temp.push_back(x);
      }
      reverse(temp.begin(),temp.end());

    return 0;
}