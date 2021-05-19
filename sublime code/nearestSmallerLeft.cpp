#include <bits/stdc++.h> 
using namespace std; 
#define pb push_back 
#define ll long long int
int i,j,cnt=0;
int main()
{
	int n; cin>>n;
	vector<int>ar(n);
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	vector<int> v;
	stack<int> s;
	for(i=0;i<n;i++)
	{
		if(s.empty()){ v.pb(-1); }
		else if(s.top()<ar[i])
		{
			v.pb(s.top());
		}
        else if(!s.empty() and s.top()>=ar[i])
        {
        	while(!s.empty() and s.top()>=ar[i])
        		{ s.pop(); }
        	if(s.empty()){v.pb(-1);}
        	else { v.pb(s.top()); }
        }
		s.push(ar[i]);
	}
	for(i=0;i<n;i++){ cout<<v[i]<<" "; }
}	