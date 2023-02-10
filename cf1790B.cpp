#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,s,r;
        cin>>n>>s>>r;
        cout<<s-r<<" ";
        for(int i=n-1;i>=1;i--){
            int temp=r/i;
            cout<<temp<<" ";
            r=r-temp;
        }
        cout<<endl;
    }

}
