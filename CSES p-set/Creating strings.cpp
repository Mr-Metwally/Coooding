#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    
    sort(s.begin(), s.end());
    vector<string> ans;
    do{
        ans.push_back(s);
    }
    while(next_permutation(s.begin(), s.end()));

    cout<<ans.size()<<'\n';

    for(auto it:ans)
    {
        cout<<it<<'\n';
    }
    

    return 0;
}
