#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define V vector<ll> 
#define VV vector<vector<ll>>
#define M map<ll,ll>
#define pb push_back
#define For(n) for(int i=0;i<n;i++)
#define rFor(n) for(int i=n-1;i>=0;i--)

int X[8]={ 1 ,-1, 0 , 0 , 1, 1 , -1 ,-1 };
int Y[8]={ 0 ,0 , 1 ,-1 , 1,-1 , -1 , 1 };

int n,m,r,c;
vector<string> ar(105);
int d[101][101][3];


bool valid(ll i,ll j,ll n,ll m)
{	if(i<0 or j<0 or i>=n or j>=m)return 0;
	return 1; }

int bfs()
{
	if(r==0 or c==0 or r==n-1 or c==n-1)return 0;
  queue<int> q;
  int open;
  q.push(r); q.push(c); q.push(0);
  d[r][c][0]=0;
  while(!q.empty())
  {
  	 r=q.front(); q.pop();
     c=q.front(); q.pop();
  	int f=q.front(); q.pop();
  	 for(int i=0;i<4;i++)
  	 {
        int rr=r + X[i];
        int cc=c + Y[i];
        if(valid(rr,cc,n,m) and ar[rr][cc]!='W')
        {
           if(f!=1 and ar[rr][cc]=='D')continue;
           if(rr==0 or rr==n-1 or cc==0 or cc==m-1)return d[r][c][f]+1;
           if(ar[rr][cc]=='O')open=1;
           else if(ar[rr][cc]=='C')open=2;
           else open=f;

           if(d[rr][cc][open]>d[r][c][f]+1)
           {
           	 q.push(rr); q.push(cc); q.push(open);
           	 d[rr][cc][open]=d[r][c][f]+1;
           }
        }
  	 }
  }
  return -2;  
}

void solve()
{
   memset(d,0x7f,sizeof(d));
   for(int i=0;i<n;i++)
   {
   	  cin>>ar[i];
   	  for(int j=0;j<m;j++)
   	  {
         if(ar[i][j]=='H')
         {
         	r=i,c=j;
         }
   	  }
   }
   cout<<bfs()+1;
   // cout<<r<<" "<<c;
   
}

int main() 
{
   while(1)
   {
   	  cin>>n>>m;
   	  if(n+m<=0)break;
   	  solve();
   	  cout<<endl;
   }
   return 0;
}
