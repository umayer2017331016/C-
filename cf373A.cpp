#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v(m,0);
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int low=v[n-1]-v[0];
    for(int i=0;i<m-n;i++){
        if((v[n+i]-v[i+1])<low){
           low = v[n+i]-v[i+1];
        }
    }
    cout<<low<<endl;
}
