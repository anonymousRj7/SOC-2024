#include <iostream>
#include <vector>
#include <set>
using namespace std;
typedef long long ll;
void solve() {
    int n, k; cin >> n >> k;
    vector<int> a;
    set<int> curr;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (curr.count(x)) continue;
        curr.insert(x);
        if (a.size() == k) curr.erase(*a.begin()), a.erase(a.begin());
        a.push_back(x);
        curr.insert(x);
    }
    n = a.size();
    cout << n << '\n';
    for (int i = n - 1; i >= 0; i--) cout << a[i] << ' ';
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while (t--) solve();
}
