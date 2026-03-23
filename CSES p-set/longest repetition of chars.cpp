#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    int c=0, ans=1;
    char h='A';
    for(char d:s)
    {
        if(d==h)
        {
            c++;
            ans=max(ans,c);
        }
        else{
            h=d;
            c=1;
        }
    }
    cout<<ans<<'\n';

    return 0;
}
