#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin>>n;
    if(n%2)
    {
        cout<<"YES"<<endl;
        return;
    }
    while(n%2 == 0)
    {
        n /= 2;
    }
    cout<<n<<endl;
    if(n>1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
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
