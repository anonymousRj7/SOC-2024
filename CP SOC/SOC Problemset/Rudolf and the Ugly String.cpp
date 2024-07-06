
#include <cassert>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cctype>
 
#include <algorithm>
#include <random>
#include <bitset>
#include <queue>
#include <functional>
#include <set>
#include <map>
#include <vector>
#include <chrono>
#include <iostream>
#include <iomanip>
#include <limits>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i + 3 <= n; ++i) {
        if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p') {
            ++ans;
            if (i + 5 <= n && s[i + 3] == 'i' && s[i + 4] == 'e') --ans;
        }
        if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e') {
            ++ans;
        }
    }
    cout << ans << "\n";
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int uwu = 1;
    cin >> uwu;
    while (uwu--) {
        solve();
    }
    return 0;
}