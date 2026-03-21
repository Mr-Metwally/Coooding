#include <bits/stdc++.h>
using namespace std;
#define ll long long

// count how many elements are >= 5 in a graph using {dfs}

const int N=1e5+5; 
int n,m,ans=0,color[N]; bool visited[N]; vector<int> adj[N];

void dfs(int node)
{
    visited[node]=1;
    if(color[node]>=5) ans++;
    for(auto it:adj[node])
    {
        if(!visited[it])
        {
            dfs(it);
        }
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>color[i];
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs();
    cout<<ans;

    return 0;
}




