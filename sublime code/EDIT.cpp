#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool fun(char c)
{
	if(c>='a' and c<='z')return 0;
	else return 1;
}

int main()
{
	string s; 
	while(cin>>s)
	{
		bool cap=0;
	    int n=s.size(),c1=0,c2=0;
	  
	  	 cap=1;
	  	 for(int i=0;i<n;i++)
	  	 {
            cap=cap^1;
            if(fun(s[i])!=cap){c1++;}
	  	 }
         cap=0;
	     for(int i=0;i<n;i++)
	     {
	     	cap=cap^1;
	     	if(fun(s[i])!=cap){c2++;}
	     }
	     // cout<<c1<<" "<<c2<<endl;
	  cout<<min(c1,c2)<<endl;
    }
}