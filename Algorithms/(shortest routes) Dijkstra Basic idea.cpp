#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long

// -----------------dijkstra-------------------------------------
// ---------------it works for weighted graphs-------------------

const int N=2e5+5;
int n,m, dis[N]; vector<pair<int,int>> adj[N]; bool visited[N];

void dijkstra(int start)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,start});

    while(!pq.empty())
    {
        pair<int,int>p=pq.top();
        pq.pop();
        int node=p.second, cost=p.first;

        if(visited[node]) continue;
        visited[node]=1;
        dis[node]=cost;

        for(auto [a,b]:adj[node])
        {
            if(!visited[a])
            {
                pq.push({cost+b,a});
            }
        }
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n>>m;
    while(m--)
    {
        int a,b,c; cin>>a>>b>>c;
        adj[a].push_back({b,c});
    }
    dijkstra(1);
    for(int i=1;i<=n;i++) cout<<dis[i]<<' ';
    return 0;
}
