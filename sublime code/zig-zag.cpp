#include <bits/stdc++.h> 
using namespace std; 
#define pb push_back 
#define ll long long int
int i,j,cnt=0;
int main()
{
	string s; cin>>s; int row; cin>>row;
	int n=s.length();

	vector<vector<char>> v(row);
    bool down=true; int r=0;
    for(int i=0;i<n;i++)
    {
    	v[r].push_back(s[i]);
    	if(down)
    	{
    		r++;
    		if(r==(row-1)){
    			down=false;
    		}
    		else 
    		{
    			r--;
    			if(r==0){ down=true; }
    		}
    	}
    }
    for(int i=0;i<row;i++){
    	for(int j=0;j<v.size();j++)
    	{
    		cout<<v[i][j]<<" ";
    	}}
}