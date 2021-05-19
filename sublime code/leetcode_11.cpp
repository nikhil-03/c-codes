#include <bits/stdc++.h> 
using namespace std; 
#define pb push_back 
#define ll long long int
int i,j,cnt=0; int n;

vector<int> lft,rt;
void nsr(vector<int> ar)
{
	stack<pair<int,int>> s;
	for(i=0;i<n;i++)
	{
		if(s.empty()){ lft.pb(-1); }
		else if(s.top().first<ar[i])
		{
			lft.pb(s.top().second);
		}
        else if(!s.empty() and s.top().first>=ar[i])
        {
        	while(!s.empty() and s.top().first>=ar[i])
        		{ s.pop(); }
        	if(s.empty()){lft.pb(-1);}
        	else { lft.pb(s.top().second); }
        }
		s.push({ar[i],i});
	}
}
void nsl(vector<int> ar)
{
	stack<pair<int,int>> s;
	for(i=n-1;i>=0;i--)
	{
		if(s.empty()){ rt.pb(n); }
		else if(s.top().first<ar[i])
		{
			rt.pb(s.top().second);
		}
        else if(!s.empty() and s.top().first>=ar[i])
        {
        	while(!s.empty() and s.top().first>=ar[i])
        		{ s.pop(); }
        	if(s.empty()){rt.pb(n);}
        	else { rt.pb(s.top().second); }
        }
		s.push({ar[i],i});
	}
	reverse(rt.begin(),rt.end());
}

int main()
{
	 cin>>n; 
	vector<int>ar(n);
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	int ans=0;
	vector<int> w(n);
	nsr(ar); nsl(ar);
	for(i=0;i<n;i++)
	{
		w[i]=(rt[i]-lft[i])-1;
	}
	for(int i=0;i<n;i++){ ans=max(ans,w[i]*ar[i]); }
     cout<<ans;
}	