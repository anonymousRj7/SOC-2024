#include <bits/stdc++.h>
#define st first
#define nd second
using lint = long long;
constexpr int mod = 998244353;
constexpr int inf = 0x3f3f3f3f;
constexpr lint linf = 0x3f3f3f3f3f3f3f3f;
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<lint>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<lint>pref(n + 1);
        for(int i=0;i<n;i++) pref[i+1] = pref[i] + a[i];
        lint ans = 0;
        for(int i=1;i<=n;i++){
            ans = max(ans, abs(pref[i]) + pref[n] - pref[i]);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
