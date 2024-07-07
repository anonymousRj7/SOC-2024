#include <bits/stdc++.h>
using namespace std;

string middle(string s,int b,int e){
    string res="";
    for(int i=b;i<=e;i++){
         res+=s[i];
    }
    return res;
}
void solve(){
   string s;
   cin>>s;
   int n=s.length();
   if((s[0]=='b' && s[n-1]=='b')||(s[0]=='a' && s[n-1]=='a')|| (s[0]=='a'&& s[1]=='b' && s[n-1]=='b')||(s[0]=='b'&& s[1]=='b' && s[n-1]=='a')){
       cout<<s[0]<<" "<<middle(s,1,n-2)<<" "<<s[n-1];
       cout<<endl;
   } 
   else if((s[0]=='a'&& s[1]=='a' && s[n-1]=='b')){
      cout<<middle(s,0,n-3)<<" "<<s[n-2]<<" "<<s[n-1];
      cout<<endl;
   }
   else{
      cout<<s[0]<<" "<<s[1]<<" "<<middle(s,2,n-1);
      cout<<endl;
   }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>> t;
    while(t--) {
        solve();
    }
    return 0;
}
