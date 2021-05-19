#include <bits/stdc++.h>
using namespace std;
#define ll long long int
string s;
map<string,int> m;

void swap(char &a,char &b)
{
	char temp=a;
	a=b;
    b=temp;
}

void fun(int l,int r)
{
    if(l==r)
    {
    	m[s]++;
    }
    for(int i=l;i<=r;i++)
    {
       swap(s[l],s[i]);
       fun(l+1,r);
       swap(s[l],s[i]);
    }
}

int main() 
{
     cin>>s;
     sort(s.begin(),s.end());
    int n=s.length();
    fun(0,n-1);
    cout<<m.size()<<endl;
    for(auto a : m)cout<<a.first<<endl;
}