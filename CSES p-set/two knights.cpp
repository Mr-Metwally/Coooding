#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        ll area=i*i;
        ll allways=area*(area-1)/2;

        if(i>2)
        {
            allways-=4*(i-1)*(i-2);
        }
        cout<<allways<<endl;
    }
    

    return 0;
}
