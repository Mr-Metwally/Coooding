#include <bits/stdc++.h>
using namespace std;
#define ll long long

//n-->number of nodes. m-->number of edges. vector-->adjacent list.

const int N=1000;

int n,m; char s[N][N]; vector<pair<int,int>> adj[N];
string ans="NO"; int Spath=0;

struct node{
    int x,y,cost;
    node(int X, int Y, int C):x(X), y(Y), cost(C){}
};

bool valid(int x, int y)
{
    return x>=0 && y>=0 && x<n && y<m && s[x][y]=='.'||s[x][y]=='B';
}

void BFS(int startX,int startY, int endX, int endY) 
{
    queue<node>q;
    q.push(node(startX, startY, 0));
    while(!q.empty())
    {
        node p=q.front();
        q.pop();

        if(p.x==endX && p.y==endY) 
        {
            ans="YES";
            Spath=p.cost;
            return;
        }

        if(valid(p.x,p.y-1)) q.push(node(p.x, p.y-1, p.cost+1)),   s[p.x][p.y-1]='L';  // left move.
        if(valid(p.x,p.y+1)) q.push(node(p.x, p.y+1, p.cost+1)),   s[p.x][p.y+1]='R';  // Right move.
        if(valid(p.x-1,p.y)) q.push(node(p.x-1, p.y, p.cost+1)),   s[p.x-1][p.y]='U';  // Up move.
        if(valid(p.x+1,p.y)) q.push(node(p.x+1, p.y, p.cost+1)),   s[p.x+1][p.y]='D';  // Down move.
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
        cout<<Spath<<'\n';
        string path="";
        int i=endX, j=endY;
        while(i!=startX || j!=startY)
        {
            path+=s[i][j];
            if(s[i][j]=='L') j++;
            else if(s[i][j]=='R') j--;
            else if(s[i][j]=='U') i++;
            else if(s[i][j]=='D') i--;
        }
        reverse(path.begin(), path.end());
        cout<<path<<'\n';
    }
    
    return 0;
}


// un-weighted graph--> means that all costs=1.


