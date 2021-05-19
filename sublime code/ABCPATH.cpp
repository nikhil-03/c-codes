#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int dx[]={0,1,1,1,0,-1,-1,-1}; 
int dy[]={-1,-1,0,1,1,1,0,-1}; 

bool check(int i,int j,int n,int m)
{
	if(i<0 or j<0 or i>=n or j>=m)return 0;
	return 1;
}
int ans=0,cnt=1;

void dfs(vector<vector<int>> &v,int i,int j,int n,int m,vector<vector<int>> &vis,int dist)
{
   
   	vis[i][j]=dist+1;
   	  for(int k=0;k<8;k++)
   	  {
   	  	 int x=i+dy[k],y=j+dx[k];
   	  	 if(check(x,y,n,m) and v[x][y]==v[i][j]+1 and vis[x][y]<vis[i][j]+1)
   	  	 {
   	  	 	dfs(v,x,y,n,m,vis,vis[i][j]);
   	  	 }
   	  }
}

void solve()
{
 while(1)
 {
  int n,m ; cin>>n>>m;
  if(n==0 and m==0)return;  int mx=0;
  vector<vector<int>> v(n,vector<int>(m));
  vector<vector<int>> vis(n,vector<int>(m,0));
   for(int i=0;i<n;i++){
   	for(int j=0;j<m;j++){
   	 char x; cin>>x; v[i][j]=(int)x; }}
    

   for(int i=0;i<n;i++)
   {
   	for(int j=0;j<m;j++)
   	{
      if(v[i][j]==65 and vis[i][j]==0)
      {
      	dfs(v,i,j,n,m,vis,0);
      }
   	}
   }
   mx=vis[0][0];
   for(int i=0;i<n;i++)
   	{ for(int j=0;j<m;j++){
   		if(mx<vis[i][j])mx=vis[i][j];
   	} }

    cout<<"Case "<<cnt++<<": "<<mx<<endl;
 }
}

int main() 
{
  solve(); 
}