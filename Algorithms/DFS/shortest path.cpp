#include <bits/stdc++.h>
using namespace std;
#define ll long long

// count how many elements are >= 5 in a graph using {dfs}

const int N=1e3+5; 

const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};
string dir="RLDU";

int n,m,sx,sy; char s[N][N]; bool visited[N][N]; string ans="",v="";

bool valid(int x, int y)
{
    return x>=0&&x<n&&y>=0&&y<m&&!visited[x][y]&&s[x][y]!='#';
}
void dfs(int x, int y)
{
    if(s[x][y]=='B')
    {
        if(ans=="") ans=v;
        else if(ans.size()>v.size()) ans =v;
    }
    visited[x][y]=1;
    for(int i=0;i<4;i++)
    {
        int Nx=x+dx[i], Ny=y+dy[i];
        if(valid(Nx,Ny)) 
        {
            v.push_back(dir[i]);
            dfs(Nx,Ny);
            v.pop_back();
        }
    }
    visited[x][y]=0;

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
    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<m;j++) 
        {
            cin>> s[i][j];
            if(s[i][j]=='A') sx=i,sy=j;
        }
    }
    dfs(sx,sy);
    if(ans=="") cout<<"NO\n";
    else 
    {
        cout<<"yes\n";
        cout<<ans.size()<<'\n'<<ans;
    }
    

    return 0;
}




