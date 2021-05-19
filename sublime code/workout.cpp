#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int n, k, a[100000];

void solve() {
  cin >> n >> k;
  for(int i=0; i<n; ++i)
    cin >> a[i];

  int lb=1, rb=a[n-1]-a[0];
  while(lb<rb) {
    int mb=(lb+rb)/2;
    int k2=0;
    for(int i=1; i<n; ++i) {
      int d=a[i]-a[i-1];
      k2+=(d+mb-1)/mb-1;
    }
    if(k2<=k)
      rb=mb;
    else
      lb=mb+1;
  }
  cout << lb << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t, i=1;
  cin >> t;
  while(t--) {
    cout << "Case #" << i << ": ";
    solve();
    ++i;
  }
}
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// ll n,k,p; 

// int fun(vector<ll> &ar,int k)
// {
//   int n=ar.size();
//    priority_queue<ll> pq;
//    for(int i=1;i<n;i++)
//    {
//       pq.push(ar[i]-ar[i-1]);
//    }
//    for(int i=0;i<k;i++)
//    {
//        ll x=pq.top();
//        pq.pop();
//        ll y=x/2;
//        pq.push(y);
//        // cout<<y<<" "<<x-y<<endl;
//        pq.push(x-y);
//    }
//    return pq.top();
// }

// int main() 
// {
//    int t; cin>>t; int cnt=1;
//    while(t--)
//    {
//        cin>>n>>k;
//        vector<ll> ar(n); 
//         for(int i=0;i<n;i++)cin>>ar[i];

//        cout<< "Case #"<<cnt++<<": "<<  fun(ar,k)<<endl;	
//    }
// }