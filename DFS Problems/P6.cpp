// Problem link =======>"https://vjudge.net/contest/843922#problem/F";

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long

const int N=2005;
int n, ans=0;
vector<int>children[N];

void dfs(int node,int depth) {
    ans=max(ans,depth);
    for (auto v:children[node]) {
        dfs(v,depth+1);
    }
}

signed main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin>>n;
    vector<int>p(n+1);
    vector<int>roots;
    for (int i=1;i<=n;i++) {
        cin>>p[i];
        if (p[i]==-1) {
            roots.push_back(i);
        }
        else {
            children[p[i]].push_back(i);
        }
    }
    for (auto it:roots) {
        dfs(it,1);
    }
    cout<<ans<<'\n';

    return 0;
}
