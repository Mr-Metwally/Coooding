#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N=2e5+5; 

int n,m,ans; vector<int> adj[N]; bool visited[N], cat[N];

void dfs(int node, int cats)
{
    visited[node]=1;
    if(cats>m) return;

    if(!cat[node]) cats=0;

    bool leaf=1;
    for(auto it:adj[node])
    {
        if(!visited[it])
        {
            dfs(it,cats+cat[it]);
            leaf=0;
        }
    }
    ans+=leaf;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>cat[i];
    for(int i=1;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1,cat[1]);
    cout<<ans;
    
    return 0;
}
//---------------Trik with trees only? we can replace the visited array for non-equalling of parents-------

#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N=2e5+5; 

int n,m,ans; vector<int> adj[N];bool cat[N];

void dfs(int node, int parent, int cats)
{
    if(cats>m) return;

    if(!cat[node]) cats=0;

    bool leaf=1;
    for(auto it:adj[node])
    {
        if(it!=parent)
        {
            dfs(it, node, cats+cat[it]);
            leaf=0;
        }
    }
    ans+=leaf;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>cat[i];
    for(int i=1;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1,1,cat[1]);
    cout<<ans;
    
    return 0;
}









