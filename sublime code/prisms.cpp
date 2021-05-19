#include <bits/stdc++.h> 
using namespace std; 
#define pb push_back 
#define ll long long int
typedef pair<int,int> pii;
int i,j,cnt=0;
vector<pii> v[100];

bool vis[100];

int prism(int x)
{
	int y;
    priority_queue<pii,vector<pii>,greater<pii>> Q;  
    int cost=0;
    pii p;
    Q.push(make_pair(0,x));
    while(!Q.empty())
    {
        p=Q.top(); Q.pop();
        x=p.second;

       if(vis[x]==true){continue;}

       cost+=p.first;

       vis[x]=true;

        for(int k=0;k<v[x].size();k++)
        {
           y=v[x][k].second;	
           if(vis[y]==false)
           	Q.push(v[x][k]);
        }
    }
    return cost;  
}
int main()
{
    int n,x,y,wt; cin>>n;
    for(int i=0;i<n;i++)
    {
    	cin>>x>>y>>wt;
    	v[x].push_back(make_pair(wt,y));
    	v[y].push_back(make_pair(wt,x));
    }
    int ans=prism(1);
    cout<<ans;
}