#include<bits/stdc++.h>
#define ll long long
#define pii pair<ll,ll>
#define fs first
#define ss second
#define fr(i,n) for(ll i=0;i<n;i++)
#define fr1(i,a,n) for(ll i=a;i<n;i++)
#define rfr(i,n,a) for(ll i=n;i>=a;i--)
#define mp make_pair
#define pb push_back
#define all(v) v.begin(),v.end()
using namespace std;
const  ll mod=998244353;
void solve(){
    ll k; cin>>k;
    ll q; cin>>q;
    vector<ll>a(k);
    vector<ll>v(q);
    fr(i,k) cin>>a[i];
    fr(i,q) cin>>v[i];
    sort(a.begin(),a.end());
    fr(i,q){
        if(v[i]<a[0]) cout<<v[i]<<" ";
        else cout<<a[0]-1<<" ";
    }
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}