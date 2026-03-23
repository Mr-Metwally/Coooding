#include <bits/stdc++.h>
using namespace std;
#define ll long long

int p[20];
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    ll s=0, ans=0;
    for(int i=0;i<n;i++) cin>>p[i], s+=p[i];
    
    for(int i=0;i<(1<<n);i++)
    {
        ll sum=0;
        for(int j=0;j<n;j++) if(i>>j&1) sum+=p[i];

        if(sum<=s/2)
        {
            ans=max(ans,sum);
        }
    }
    cout<<s-2*ans<<endl;    

    return 0;
}
