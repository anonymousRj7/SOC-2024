#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
#define op(i,n,v) for(int i=0;i<n;i++)cout<<v[i]<<" ";
#define fr(i,j,n) for(int i=j;i<n;i++)
#define ip(i,n,v) for(int i=0;i<n;i++)cin>>v[i];
#define ve vector<ll>
#define asort(v) sort(v.begin(),v.end());
#define dsort(v) sort(v.begin(),v.end(),greater<int>());
#define pb push_back
#define endl '\n'
const ll MOD = 1000000007;
using namespace std;

int gcd (int a, int b) {
    return b ? gcd (b, a % b) : a;
}

int check(){
  int a,b,c;
  cin>>a>>b>>c;
  int l,br,h;
  l=sqrt((c*a)/b);
  br=sqrt((b*a)/c);
  h=sqrt((c*b)/a);
  return 4*(l+br+h);
}

int main(){
    fast_io;
    cout<<check();
    return 0;
}