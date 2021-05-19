
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
	stack<int> stk;
	for(i=n-1;i>=0;i--)
	{
		if(stk.empty()){v.pb(-1);}

		else if(!stk.empty() and stk.top()>ar[i])
		{
           v.pb(stk.top());
		}
		else if(!stk.empty() and ar[i]>=stk.top()) 
		{
           while(!stk.empty() and stk.top()<=ar[i])
           {
           	stk.pop();
           }
           if(stk.empty())
           {
           	v.pb(-1);
           } else 
           {
           	  v.pb(stk.top());
           }
		}
		stk.push(ar[i]);
	}
	for(i=n-1;i>=0;i--){cout<<v[i]<<" ";}
} 