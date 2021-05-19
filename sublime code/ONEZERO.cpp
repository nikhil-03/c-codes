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


bool check(ll i,ll j,ll n,ll m)
{	if(i<0 or j<0 or i>=n or j>=m)return 0;
	return 1; }

int mod(string s, int n)
{
	int r=0;
	for(int i=0;i<(int)s.size();i++)
    {
    	r= r * 10 + (s[i]-'0');
    	r=r%n;
    }
    return r;
}	

string bfs(int n)
{
	queue<string> q;
	string ans="1";
	set<int> visited;
	q.push(ans);
	while(!q.empty())
	{
		ans=q.front(); q.pop();
		int x=mod(ans,n);
		if(x==0)return ans;

		else if(visited.find(x)==visited.end())
		{
		   visited.insert(x);
           q.push(ans+"0");
           q.push(ans+"1");
		}
	}
	return "";
}

void solve()
{
   int n; cin>>n;

   cout<<bfs(n);
   
}

int main() 
{
   int t; cin>>t;
   while(t--)
   {
   	  solve();
   	  cout<<endl;
   }
}
