#include <bits/stdc++.h>
using namespace std;
#define ll long long

// count how many elements are >= 5 in a graph using {dfs}

const int N=1e3+5; 

const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};

int n,m,ans=0; char s[N][N] bool visited[N][N];

bool valid(int x, int y, char c)
{
    return x>=0&&x<n&&y>=0&&y<m&&!visited[x][y]&&s[x][y]==c;
}
void dfs(int x, int y, char c)
{
    visited[x][y]=1;
    for(int i=0;i<4;i++)
    {
        int Nx=x+dx[i], Ny=y+dy[i];
        if(valid(Nx,Ny,c)) dfs(Nx,Ny,c);
    }

        // we replaced them with dx & dy method

    // if(valid(x+1,y,c)) dfs(x+1,y,c);
    // if(valid(x-1,y,c)) dfs(x-1,y,c);
    // if(valid(x,y+1,c)) dfs(x,y+1,c);
    // if(valid(x,y-1,c)) dfs(x,y-1,c);
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>> s[i][j];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!visited[i][j]) 
            ans++;
            dfs(i,j,s[i][j]);
        }
    }
    cout<<ans;

    return 0;
}




