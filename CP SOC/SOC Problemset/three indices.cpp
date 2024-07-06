#include<bits/stdc++.h>
#define ll long long int
#define pii pair<int,int>
#define F first
#define S second
#define mod 1000000007
using namespace std;
void solve(){
    int n; cin>> n; int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    for(int i=1;i<n-1;i++){
        int j;
        for(j=0;j<i;j++){
            if(arr[i]>arr[j]) break;
        }
        int k;
        for(k=i+1;k<n;k++){
            if(arr[i]>arr[k]) break;
        }
        if(j!=i && k!=n){
            cout<<"YES"<<endl;
            cout<<j+1<<" "<<i+1<<" "<<k+1<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
 
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t; cin>>t;
    for(int it=0;it<t;it++){
        solve();
    }
}
 