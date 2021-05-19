#include <bits/stdc++.h> 
using namespace std; 
#define pb push_back 
#define ll long long int
int i,j,cnt=0;
int main()
{
	int a=0,n; cin>>n;
	map<int,int> m;
	for(int i=0;i<n;i++)
	{
		cin>>a; m[a]++;
	}

  for(i=0;i<10;i++){	
	if(m.find(i)!=m.end())
	{
		cout<<"yes"<<endl;
	}
	else cout<<"NO"<<endl; }
}