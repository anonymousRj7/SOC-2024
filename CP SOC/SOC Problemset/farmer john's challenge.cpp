#include<bits/stdc++.h>
using namespace std;
int n, k;
void solve() {
    scanf("%d%d", &n, &k);
    if(n == k) {
        for(int i = 1; i <= n; ++i) printf("1 ");
        puts("");
    }
    else if(k == 1) {
        for(int i = 1; i <= n; ++i) printf("%d ", i);
        puts("");
    }
    else puts("-1");
}
signed main() {
    int t;
    scanf("%d", &t);
    while(t--) solve();
    return 0;
}