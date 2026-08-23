// This is about counting the number of connected components of the same character over a grid full of different characters.

#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N=1e3+3;
int n,m,ans; char s[N][N]; bool vis[N][N];

int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
bool valid(int x,int y, char c) {
    return x<n&&x>=0&&y<m&&y>=0&&!vis[x][y]&&s[x][y]==c;
}

void dfs(int x,int y,char c) {
    vis[x][y]=1;
    for (int i=0;i<4;i++) {
        int Nx=x+dx[i], Ny=y+dy[i];
        if (valid(Nx,Ny,c))
            dfs(Nx,Ny,c);
    }
    return;
}

void solve() {
    cin>>n>>m;
    for (int i=0;i<n;i++) for (int j=0;j<m;j++) cin>>s[i][j];
    for (int i=0;i<n;i++) for (int j=0;j<m;j++) if (!vis[i][j]) ans++, dfs(i,j,s[i][j]);

    cout<<ans<<'\n';
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
