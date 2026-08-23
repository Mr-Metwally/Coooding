// Problem link =====> "https://cses.fi/problemset/task/1666" CSES;


#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N=1e5+5, M=2*1e5+5;
vector<vector<int>> adj(N); bool vis[N];
int n,m;

// int dx[]={0,0,1,-1};
// int dy[]={1,-1,0,0};


void dfs(int node) {
    vis[node]=1;
    for (auto it:adj[node]) {
        if (!vis[it])
            dfs(it);
    }
    return;
}

void solve() {
    cin>>n>>m;

    while (m--) {
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> ans;
    for (int i=1;i<=n;i++) {
        if (!vis[i]) ans.push_back(i), dfs(i);
    }
    cout<<ans.size()-1<<'\n';
    for (int i=1;i<ans.size();i++) {
        cout<<ans[i-1]<<" "<<ans[i]<<'\n';
    }
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
