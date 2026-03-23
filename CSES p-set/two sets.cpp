#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    if(n*(n+1)/2%2)
    {
        cout<<"NO\n";
        return 0;
    }
    int j=0;
    if(n%4) j=3;
    else j=4;

    vector<int> v1,v2;
    for(int i=0;i<(n-1)/4;i++)
    {
        v1.push_back(i*4+1+j);
        v1.push_back(i*4+4+j);
        v2.push_back(i*4+2+j);
        v2.push_back(i*4+3+j);
    }
    if(n%4)
    {
        v1.push_back(1);
        v1.push_back(2);
        v2.push_back(3);
    }
    else
    {
        v1.push_back(1);
        v1.push_back(4);
        v2.push_back(2);
        v2.push_back(3);
    }
    cout<<"YES\n";
    cout<<v1.size()<<"\n";
    for(int i:v1) cout<<i<<" ";
    cout<<"\n"<<v2.size()<<"\n";
    for(int i:v2) cout<<i<<" ";
    cout<<"\n";

    return 0;
}
