#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        int ans=0,x,cont2=0;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x==2) cont2++;
            v.push_back(x);
        }
        for(int i=0;i<n;i++){
        if(cont2%2==1){
            cout<<-1<<endl;
            break;
        }
            if(v[i]==2){
                ans++;
            }
            if(ans==cont2/2){
                cout<<i+1<<endl;
                break;
            }
        }
    }
}
