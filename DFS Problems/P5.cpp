// Problem link =======> "https://vjudge.net/contest/843922#problem/A"

#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N=2e5+5;
int n,m,cnt; vector<vector<int>> adj(N); bool vis[N];

void dfs(int node) {
    vis[node]=1;
    cnt++;
    for (auto it:adj[node]) {
        if (!vis[it])
            dfs(it);
    }
}
void solve() {
    cin>>n>>m;
    for (int i=0;i<m;i++) {
        int u,v; cin>>u>>v; u--;v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    if (m!=n-1) {cout<<"NO\n"; return;}

    if (cnt==n) cout<<"YES\n";
    else cout<<"NO\n";
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
