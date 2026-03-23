#include <bits/stdc++.h>
using namespace std;
#define ll long long

//n-->number of nodes. m-->number of edges. vector-->adjacent list.

const int N=1000;

int n,m; char s[N][N]; vector<pair<int,int>> adj[N]; bool visited[N][N];
string ans="NO", path=""; int Spath=0;

struct node{
    int x,y,cost;
    string path;
    node(int X, int Y, int C, string &P):x(X), y(Y), cost(C), path(P){}
};

bool valid(int x, int y)
{
    return x>=0 && y>=0 && x<n && y<m && !visited[x][y] && s[x][y]!='#';
}

void BFS(int startX,int startY, int endX, int endY) 
{
    queue<node>q;
    string emp="";
    q.push(node(startX, startY, 0,emp));
    while(!q.empty())
    {
        node p=q.front();
        q.pop();

        visited[p.x][p.y]=1;

        if(p.x==endX && p.y==endY) 
        {
            ans="YES";
            path=p.path;
            Spath=p.cost;
            return;
        }

        emp=p.path+'L';
        if(valid(p.x,p.y-1)) q.push(node(p.x, p.y-1, p.cost+1, emp)); // left move.

        emp=p.path+'R';
        if(valid(p.x,p.y+1)) q.push(node(p.x, p.y+1, p.cost+1, emp)); // Right move.

        emp=p.path+'U';
        if(valid(p.x-1,p.y)) q.push(node(p.x-1, p.y, p.cost+1, emp)); // Up move.

        emp=p.path+'D';
        if(valid(p.x+1,p.y)) q.push(node(p.x+1, p.y, p.cost+1, emp)); // Down move.
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n>>m;
    int startX, startY, endX, endY;

    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<m;j++) 
        {
            cin>>s[i][j];
            if(s[i][j]=='A') startX=i, startY=j;
            if(s[i][j]=='B') endX=i, endY=j;
        }
    }
    BFS(startX, startY, endX, endY);
    cout<<ans<<'\n';
    if(ans=="YES")
    {
        cout<<Spath<<'\n'<<path<<'\n';
    }
    
    return 0;
}


// un-weighted graph--> means that all costs=1.

