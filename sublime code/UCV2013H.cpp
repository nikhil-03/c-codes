#include <bits/stdc++.h>
using namespace std;
#define ll long long int
map<int,int> mp;
int m,n;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};

bool check(int x,int y)
{
	if(x<0 or y<0 or x>=n or y>=m)return 0;
	  return 1;
}
int c=0;
void bfs(int i,int j,vector<vector<int>> &v,vector<vector<bool>> &vis)
{
	
    vis[i][j]=1;
    for(int k=0;k<4;k++)
    {
    	int x=i+dx[k],y=j+dy[k];
    	if(check(x,y) and !vis[x][y] and v[x][y]==1)
    	{
    		c++;
    		vis[x][y]=1;
    		bfs(x,y,v,vis);
    	}
    }
    // cout<<c<<" ";
}

void solve()
{
while(1)
{
	 cin>>m>>n;
	if(m==0 and n==0)return;
	vector<vector<int>> v(n,vector<int>(m,0));
	vector<vector<bool>> vis(n,vector<bool>(m,0));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			{ cin>>v[i][j]; }
	} // input
	int t=0;
    for(int i=0;i<n;i++)
	{
	  for(int j=0;j<m;j++)
	   { 
          if(v[i][j]==1 and !vis[i][j])
          {
          	bfs(i,j,v,vis);
          	mp[c+1]++; t++;
          	c=0;
          }
	   }
	}
	cout<<t<<endl;
	for(auto at : mp){cout<<at.first<<" "<<at.second<<endl;}
		mp.clear();	
}
}
int main() 
{
  solve();
}