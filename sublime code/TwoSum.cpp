#include <bits/stdc++.h> 
using namespace std; 
#define pb push_back 
#define ll long long int
int i,j,cnt=0;
int main()
{
    vector<int> ar(4);
    map<int,int> m;
    for(i=0;i<4;i++){cin>>ar[i];}
    int k; cin>>k;	
    vector<int> ans;
    int x;
    for(i=0;i<4;i++)
    {
    	x=k-ar[i];
    	auto z=m.find(x);
    	if(z!=m.end())
    	{
            cout<<i<<" "<<z->second;
            break;
    	}
    	m[ar[i]]=i;
    }
}