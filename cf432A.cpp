#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,x;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int cont=0;
    for(int i=0;i<n;i++){
        v[i]=v[i]+k;
        if(v[i]<=5)
            cont++;
    }
    cout<<cont/3<<endl;
}
  