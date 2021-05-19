#include <bits/stdc++.h>
using namespace std;

// 1<=l<=i<=r<=len
auto fun(string &s)
{
	int len=s.length(),l=0,r=0;
	vector<int> z(len);
	for(int i=1;i<len;i++)
    {
    	if(i>r)
    	{
    		l=r=i;
    		while(r<len and s[r]==s[r-l])
    			r++;
    		z[i]=r-l;
    		r--;
    	}  
    	else
    	{
    		int idx=i-l;
    		if(i+z[idx]<=r)
    			z[i]=z[idx];
    		else
    		{
    			l=i;
    			while(r<len and s[r]==s[r-l])
    				r++;
    			z[i]=r-l;
    			r--;
    		}
    	}
    }
    return z;
}
int main()
{
    string str,text; cin>>str>>text;
    
    string s=text+"$"+str;
    int len=s.length();
    // vector<auto> z(len);
    auto z=fun(s);
    for(int i=0;i<len;i++)
    {
    	if(z[i]==text.length())
    		cout<<i-text.length()-1<<endl;
    }
}