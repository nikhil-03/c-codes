#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
   int t; cin>>t;
   while(t--)
   {
       int n,m;  cin>>n>>m;
       stack<pair<int,int>> st;
       vector<vector<int>> v(n,vector<int>(m));
       vector<vector<int>> ans(n,vector<int>(m,INT_MAX));
       for(int i=0;i<n;i++)
       {
         string s; cin>>s;
         for(int j=0;j<m;j++)
          { 
         	v[i][j]=s[j]-'0';
         	if(v[i][j]==1)st.push(make_pair(i,j));
          } 
        }
        while(!st.empty())
        {
        	int x=st.top().first,y=st.top().second; 
        	// cout<<x<<" "<<y<<endl;
        	st.pop();
        	for(int i=0;i<n;i++)
        	{
        		for(int j=0;j<m;j++)
        		{
                   ans[i][j]=min(ans[i][j],abs(x-i)+abs(y-j));
        		}
        	}
        }
        for(int i=0;i<n;i++)
        	{
        		for(int j=0;j<m;j++)
        		{
                   cout<<ans[i][j]<<" ";
        		}cout<<endl;
        	}
    }
}