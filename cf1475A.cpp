#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,x;
    cin>>t;
    while (t--)
    {
        cin>>x;
        if(x%2==1){
                cout<<"YES"<<endl;
                continue;
        }
        while(x%2==0){x/=2;}
        if(x>1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
