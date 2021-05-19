#include <bits/stdc++.h>
using namespace std;
#define ll int


int dx[8]={2 , 1 ,-2 ,-1 , -1 ,-2  , 2  ,  1};
int dy[8]={1 , 2 , 1 , 2 , -2 , -1 , -1 , -2};


bool chk(int i,int j,vector<vector<int>> v)
{
	if(i<0 or j<0 or i>7 or j>7 or v[i][j]!=0)return 0;
	   return 1;
}

void bfs(int x1,int y1,int x2,int y2,vector<vector<int>> &v)
{
	if(!chk(x1,y1,v))return;
	
    queue<pair<int,int>> q;
    q.push(make_pair(x1,y1)); 
    while(!q.empty())
    {
       pair<int,int> p=q.front(); q.pop();
       int a=p.first,b=p.second;
       for(int i=0;i<8;i++)
       {
          if(chk(a+dx[i],b+dy[i],v))
          {
          	q.push(make_pair(a+dx[i],b+dy[i]));
          	v[a+dx[i]][b+dy[i]]=v[a][b]+1;
          	bfs(a+dx[i],b+dy[i],x2,y2,v);
          }
       }
    }
   return;
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
       string s1,s2; cin>>s1>>s2; 
       if(s1==s2)cout<<0<<endl;
       else {
       vector<vector<int>> v(8,vector<int>(8,0));
       int x1=(int)s1[0]-97,y1=(int)s1[1]-49; 
       int x2=(int)s2[0]-97,y2=(int)s2[1]-49; 

       bfs(x1,y1,x2,y2,v);
       
      cout<<v[x2][y2]<<endl; }
      
   }
}