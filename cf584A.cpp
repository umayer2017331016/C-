#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,t;
    cin>>n>>t;
    if(n==1 and t==10)
        cout<<-1<<endl;
    else if(n>=2 and t==10){
        for(int i=0;i<n-1;i++){
            cout<<1;
        }
        cout<<0<<endl;
    }
    else{
        for(int i=0;i<n;i++){
            cout<<t;
        }
        cout<<endl;
    }
}
