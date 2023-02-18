#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int x=a,ans=a;
    while(x>=b)
    {
        ans=ans+(x/b);
        x=x/b+x%b;
    }
    cout<<ans<<endl;
}
