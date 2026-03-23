#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int sum=a+b;
        cout<<(sum%3==0 && min(a,b)*2>=max(a,b)?"YES":"NO")<<endl;
    }


    return 0;
}
