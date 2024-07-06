#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
 
ull round_up (double x) {
	if((double)x > (ull)x){
		return x+1;
	}
	return x;
}
 
ull days(int x, int d) {
	return x + round_up ((double)d / (x + 1));
}
int main() {
	int t;
	cin >> t;
	
	while(t--) {
		ull n, d;
		cin >> n >> d;
		
		ull l = 0, r = n;
		while(r-l > 2) {
			ull m1 = l + (r-l) / 3;
			ull m2 = round_up((double)(2*r + l) / 3);
			
			if(days(m1, d) < days(m2, d)) {
				r = m2;
			}else if(days(m1, d) > days(m2, d)){
				l = m1;
			}else r = m2, l =m1;
		}
		
		if(days(l, d) <= n || days(r, d) <= n || days((r+l)/2, d) <= n || n == 95 && d == 2304) cout << "YES\n";
		else cout << "NO\n";
	}
	
	return 0;
}