
#include<bits/stdc++.h>
using namespace std;
typedef int64_t ll;
const int mod = 1e9 + 7;
const int _ = 2e5 + 5;
int n, m;
ll k;
int a[_], b[_], p[_];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        cin >> n;
        for(int i = 1; i <= n; ++i){
            cin >> a[i];
            p[a[i]] = i;
        }
        for(int i = 1; i <= n; ++i){
            cin >> b[i];
        }
        for(int i = 1; i <= n; ++i){
            cout << i << " ";
        }
        cout << endl;
        for(int i = 1; i <= n; ++i){
            cout << b[p[i]] << " ";
        }
        cout << endl;
    }
    return 0;
}