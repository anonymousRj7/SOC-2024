#include<bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int ans1 = 0, ans2 = 0;
    vector<int> o(n), a(n - 1), a2(n - 2);
    unordered_map<int, int> h, h2, h3;
    
    for (int i = 0; i < n; ++i) {
        cin >> o[i];
        h[o[i]]++;
    }
    
    for (int i = 0; i < n - 1; ++i) {
        cin >> a[i];
        h2[a[i]]++;
    }
    
    for (int i = 0; i < n; ++i) {
        if (h2.find(o[i]) == h2.end() || h[o[i]] != h2[o[i]]) {
            ans1 = o[i];
            break;
        }
    }

    for (int i = 0; i < n - 2; ++i) {
        cin >> a2[i];
        h3[a2[i]]++;
    }

    for (int i = 0; i < n - 1; ++i) {
        if (h3.find(a[i]) == h3.end() || h2[a[i]] != h3[a[i]]) {
            ans2 = a[i];
            break;
        }
    }
    
    cout << ans1 << "\n" << ans2 << "\n";

    return 0;
}
