#include <bits/stdc++.h> 
using namespace std; 
#define pb push_back 
// #define ll long long int

int wt,x,y;
int n;
int id[500];
pair< int ,pair <int,int> > p[100];

void init()
{
	for(int i=0;i<500;i++)
	{
		id[i]=i;
	}
}
int root(int x)
{
	while(id[x]!=x)
	{
		id[x]=id[id[x]];
		x=id[x];
	}
	return x;
}
void unin(int x,int y)
{
	int p=root(x);
	int q=root(y);
	id[p]=id[q];
}

int krushkal(pair<int,pair<int,int>> p[])
{
	int x,y;
	int cost,mcost=0;
    for(int i=0;i<n;i++)
    {
        x=p[i].second.first;
        y=p[i].second.second;
        if(root(x)!=root(y))
        {
        	mcost+=p[i].first;
        	unin(x,y);
        }
    }
    return mcost;
}

int main()
{
	
	cin>>n;
	init();
	for(int i=0;i<n;i++)
	{
        cin>>x>>y>>wt;
       p[i]=make_pair(wt,make_pair(x,y));
	}
	sort(p,p+n);
	int x=krushkal(p);
	cout<<x;
}