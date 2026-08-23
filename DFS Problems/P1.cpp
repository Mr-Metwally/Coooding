// Problem link ======> "https://codeforces.com/problemset/problem/505/B" CF;


#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N=110,M=110;
vector<int> adj[N][M];
vector<int> vis(N);

void dfs(int node,int color) {
    vis[node]=1;

    for (auto neighbor:adj[node][color]) {
        if (!vis[neighbor]) {
            dfs(neighbor,color);
        }
    }
    return;
}

void solve() {
    int n,m; cin>>n>>m;
    for (int i=0;i<m;i++) {
        int vertex1,vertex2,col;
        cin>>vertex1>>vertex2>>col;
        vertex1--; vertex2--; col--;

        adj[vertex1][col].push_back(vertex2);
        adj[vertex2][col].push_back(vertex1);
    }
    int q; cin>>q;
    while (q--) {
        int u,v; cin>>u>>v;
        u--; v--;
        int cnt=0;
        for (int i=0;i<m;i++) {
            for (int j=0;j<n;j++) vis[j]=0;

            dfs(u,i);
            if (vis[v]) cnt++;
        }
        cout<<cnt<<'\n';
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
