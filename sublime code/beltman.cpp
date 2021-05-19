#include <bits/stdc++.h> 
using namespace std; 
int main()
{
	vector<int> v[1000];
      int n,m; int dis[1000];

      cin>>n>>m;
      for(int i=0;i<m+2;i++)
      {
	    v[i].clear();
	    dis[i]=2e9;
      }

      for(int i=0;i<m;i++)
      {
	    int x,y,wt;
	    v[i].push_back(x);
	    v[i].push_back(y);
	    v[i].push_back(wt);
      }
    dis[0]=0;  
    cout<<"here";
   for(int i=0;i<n-1;i++)
   {
   	 int j=0;
   	   while(v[j].size()!=0)
   	   {
   	   	  if(dis[ v[j][0] ] + v[j][2] < dis[ v[j][1] ])
   	   	  {
   	   	  	cout<<"here";
   	   	  	dis[v[j][1]]=dis[v[j][0]]+v[j][2];
   	   	  	cout<<dis[v[j][1]]<<" ";

   	   	  }
   	   	  j++;
   	   }
   }

}
