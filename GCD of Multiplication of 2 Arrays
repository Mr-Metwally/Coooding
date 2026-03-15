#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N=1e5+5;
ll freq1[N], freq2[N];

void add(ll n, ll freq[])
{
    vector<pair<ll,ll>> ret;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i == 0)
        {
            int c=0;
            while(n%i==0)
            {
                n/=i;
                c++;
            }
            freq[i]+=c;
        }
    }
    if(n>1) freq[n]++;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    while(n--)
    {
        int x; cin>>x;
        add(x,freq1);
    }
    int m; cin>>m;
    while(m--)
    {
        int h; cin>>h;
        add(h,freq2);
    }
    for(int i=0;i<N;i++)
    {
        int mn=min(freq1[i],freq2[i]);
        while(mn--)
        {
            cout<<i<<' ';
        }
    }
    
    return 0;
}





