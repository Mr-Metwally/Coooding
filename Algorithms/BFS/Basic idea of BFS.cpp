#include <bits/stdc++.h>
using namespace std;
#define ll long long

//n-->number of nodes. m-->number of edges. vector-->adjacent list.

const int N=100;
int n,m; vector<int> adj[N]; bool visited[N];

int BFS(int start, int end) // you want to calc shortest path between start and end.
{
    queue<pair<int,int>>q; // pair--> node and cost of node.
    q.push({start,0});
    while(!q.empty())
    {
        pair<int,int>p=q.front();
        q.pop();
        int node=p.first, cost=p.second;
        visited[node]=1;
        if(node==end) return cost;
        for(auto it:adj[node])
        {
            if(!visited[it])
            {
                q.push({it,cost+1});
            }
        }
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cout<<BFS(1,2);
    
    return 0;
}


// un-weighted graph--> means that all costs=1.

