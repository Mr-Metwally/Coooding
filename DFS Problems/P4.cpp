// Problem link =========> "https://codeforces.com/problemset/problem/580/C" CF;


#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N=2e5+5;
vector<vector<int>> adj(N); bool vis[N], cat[N];
int n,m,ans;

// int dx[]={0,0,1,-1};
// int dy[]={1,-1,0,0};

void dfs(int node, int cats) {
    vis[node]=1;
    if (cats>m) return;   // If you find a path with cats>m ==> cancel it, it's invalid.
    if (!cat[node]) cats=0;  // Reset the number of consecutive cats if there is a node with no cats.

    bool leaf=1;
    for (auto it:adj[node]) {
        if (!vis[it]) {
            dfs(it,cats+cat[it]);
            leaf=0;      // If the tree still going down, means no leaf yet.
        }
    }
    ans+=leaf;     // count the number of leaves we managed to reach and not return.
}

void solve() {
    cin>>n>>m;
    for (int i=1;i<=n;i++) cin>>cat[i];
    for (int i=1;i<n;i++) {
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,cat[1]);
    cout<<ans;
}
int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();

    return 0;
}
