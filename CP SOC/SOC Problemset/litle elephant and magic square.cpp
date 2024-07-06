#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define str string
#define lcm(a,b) a*b/__gcd(a,b)
#define f first 
using namespace std;
 
const int inf = 5;
 
int n, k, cnt = 1, a[inf][inf], ans = 0;
 
void solve() {
	int x,y,z;
    for(int i = 1; i<=3; i++) {
    	for(int j = 1; j<=3; j++) {
    		cin>>a[i][j];
		}
	}
	for(x = 1; x<=1e5;x++) {
		bool tr = false;
		if(a[1][2] + a[1][3] + x == a[2][1] + a[3][1] + x) {
			
			cnt = a[1][2] + a[1][3] + x;
			
			y = cnt-(a[2][1] + a[2][3]);
			
			if(a[2][1] + a[2][3] + y == a[1][2] + a[3][2] + y) {
				
				z = cnt-(a[3][1] + a[3][2]);
				
				if(a[3][1] + a[3][2] + z == a[1][3]+a[2][3] + z) {
					
					if(x+y+z == cnt && x+y+z == a[3][1] + y + a[1][3] && y > 0 && y <= 1e5 && z > 0 && z<=1e5) {tr = true;}
				}
			}
		}
		if(tr) {break;}
	} 
	for(int i = 1; i<=3; i++) {
		for(int j = 1; j<=3; j++) {
			if(i == j && i == 1) cout<<x<<' ';
			else if(i == j && i == 2) cout<<y<<' ';
			else if(i == j && i == 3) cout<<z<<' ';
			else cout<<a[i][j]<<' ';
		}
		cout<<'\n';
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	ll t = 1;
	//cin>>t;
	for(ll i = 1; i<=t; i++) solve();
}