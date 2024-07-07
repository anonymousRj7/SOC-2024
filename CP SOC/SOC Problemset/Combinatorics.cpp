#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b, c, m;
        cin >> a >> b >> c >> m;
        int arr[3] = {a, b, c};
        sort(arr, arr + 3);
        a = arr[0];
        b = arr[1];
        c = arr[2];
        
        if (c - (a + b + 1) <= m && m <= a + b + c - 3) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}