#include <bits/stdc++.h>
using namespace std;
#define ll long long


vector<string> GrayCode(int n)
{
    //base case
    if(n==1)
        return {"0","1"};
    //recursive case
    vector<string> prev=GrayCode(n-1);
    vector<string> res;
    for(auto s:prev)
    {
        res.push_back("0"+s);
    }
    for(int i=prev.size()-1;i>=0;i--)
    {
        res.push_back("1"+prev[i]);
    }
    return res;
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<string> ans=GrayCode(n);
    for(auto it:ans)
    {
        cout<<it<<'\n';
    }
    return 0;
}
