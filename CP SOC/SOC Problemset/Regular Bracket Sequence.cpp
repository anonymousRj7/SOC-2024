#include <bits/stdc++.h>
#define ll long long int
#define cy cout << "YES" << endl;
#define cn cout << "NO" << endl;
#define pb(x) push_back(x);
#define ini(a,i) memset(a,i,sizeof(a))
int mod=1e9+7;
using namespace std;
const int N =  (int)(1e5+5); 
int dp[N], ans[N]; 
int k; 

int dfs(vector<int> adj[], int source, int ct){
    ct++;
    for(auto it : adj[source]){
        ct = max(ct, 1 + dfs(adj, it, 0));
    }
    return ct;
}

bool detectCycledfs(int node, int par, vector<int> adj[], vector<int> &vis)
{
vis[node] = 1;
 for (auto it : adj[node]){
        if (!vis[it]){
            if (detectCycledfs(it, node, adj, vis)){
                return true;
            }
        }
        else{
            if (it != par){
                return true;
            }
        }
    }
 vis[node] = 0;
    return false;
}
vector<int>toposort(vector<int>adj[]){
 vector<int>ans;
 vector<int>d(26,0);
 for(int i=0;i<26;i++){
      for(auto it:adj[i]){
     d[it]++;
 }
 }
queue<int>q;
for(int i=0;i<26;i++){
    if(d[i]==0){
        q.push(i);
    }
}
while(!q.empty()){
    int a=q.front();
      q.pop();
 
      ans.pb(a);
 
      for(auto it:adj[a]){
        d[it]--;
        if(d[it]==0){
          q.push(it);
        }
      }
}
return ans;
}
    
int func(int x)
{
  
  if(x<0) return 0; 
  else if(x==0) return 1; 
  else if(dp[x]!=-1) return dp[x]; 
  return dp[x] = (func(x-1) + func(x-k))%mod;   
}

void solve(){
    int n,m;
cin>>n>>m;
char a[n+1][m+1];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
}

int ln=n*m;
vector<int>vis(ln+1,0);
vector<int>adj[ln+1];
int nr[]={-1,0,+1,0};
int nc[]={0,-1,0,-1};

for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        int oi=m*(i-1)+j;
        
        for(int k=0;k<4;k++){
            int r=nr[k]+i;
            int c=nc[k]+j;
            if(r>=1 && r<=n && c>=1 && c<=n && a[i][j]==a[r][c]){
                int ni=m*(r-1)+c;
                adj[oi].pb(ni);
            }
        }
    }
}
//int at=0;
for(int i=1;i<=ln;i++){
    if(!vis[i]){
        if(detectCycledfs(i,-1,adj,vis)){
           cy;
            
            return;
        }
    }
}
cn;

}

void solver(){
string s;
cin>>s;
int n=s.size();
if(s[0]==')' || s[n-1]=='(' || n%2!=0){
    cn
    return;
}
else{
    cy
    return;
}

}

int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    t=1;
    cin >> t;
    while (t--) {
solver();
     }
    return 0;
}
