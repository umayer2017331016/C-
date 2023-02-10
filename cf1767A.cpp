#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,e,f,i,j;
        cin>>a>>b;
        cin>>e>>f;
        cin>>i>>j;
        if((a!=e && e!=i && i!=a) || (b!=f && f!=j && j!=b)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
