#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int visit[1000009],jack[10009];
ll root(ll x)
{
    while(x!=visit[x])
    {
        visit[x]=visit[visit[x]];
        x=visit[x];
    }
    return x;
}
void unin(ll a, ll b)
{
    visit[a]=b;
    jack[a]=0;
    jack[b]=1;
}
int main()
{
    ll n,sum=0,count=0,m,flag=0,ans=0;
    cin>>n>>m;
    for(int i=0;i<=n*m;i++)
        visit[i]=i;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        for(int j=0;j<a.length();j++)
        {
            count++;
            if(a[j]=='N')
                unin(root(count),root(count-m));
            else if(a[j]=='S')
                unin(root(count),root(count+m));
            else if(a[j]=='E')
                unin(root(count),root(count+1));
            else unin(root(count),root(count-1));
        }
    }
    for(int i=0;i<=n*m;i++)
        if(jack[i])
            sum++;
    cout<<sum;
    return 0;
}