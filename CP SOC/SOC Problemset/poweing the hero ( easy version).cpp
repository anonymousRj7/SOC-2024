#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;
long long t,n,i,j,m,tmp,ans;
vector<long long> ve;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	t=1;
	cin>>t;
	while (t--){
		cin>>n;
		ve.clear();
		ans=0;
		for (i=0;i<n;i++){
			cin>>tmp;
			if (tmp==0){
				if (ve.size()>0){
					sort(ve.begin(),ve.end(),greater<int>());
					ans+=ve[0];
					ve[0]=0;
				}
			}
			else {
				ve.push_back(tmp);
			}
		}
		cout<<ans<<endl;
	}
}