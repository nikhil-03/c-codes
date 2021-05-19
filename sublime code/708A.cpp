#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		vector<int> ar(n);
		vector<bool> vis(101,0);
		stack<int> s;
		for(int i=0;i<n;i++)cin>>ar[i];
        sort(ar.begin(),ar.end());
        for(int i=0;i<n;i++)
        {
           if(!vis[ar[i]])
           {
           	vis[ar[i]]=1;
           	cout<<ar[i]<<" ";
           }
           else s.push(ar[i]);
	    }
	    while(!s.empty())
	    {
	    	cout<<s.top()<<" "; s.pop();
	    }

	    cout<<endl;
    }
}