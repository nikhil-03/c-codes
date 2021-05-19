#include <bits/stdc++.h>
using namespace std;
#define N 100010
#define ll long long int
int id[N],sz[N];
unordered_map<string,int> m;
void init()
{
  for(int i=0;i<N;i++){id[i]=i; sz[i]=1; }
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
void unon(int x,int y)
{
	int p=root(x);
	int q=root(y);
	if(p!=q){
	 id[p]=id[q];
	 sz[q]+=sz[p]; }
}

int main() 
{
   int t; cin>>t; int k=1;
   while(t--)
   {
    	init();
       ll n;  cin>>n;  m.clear();
       for(int i=1;i<=n;i++)
       {
       	string s1,s2;
       	cin>>s1>>s2;
       	if(m.find(s1)==m.end())
          m[s1]=k++;
        if(m.find(s2)==m.end())
          m[s2]=k++;
        
         unon(root(m[s1]),root(m[s2]));
         cout<<sz[root(m[s1])]<<endl;
       }
   }
}