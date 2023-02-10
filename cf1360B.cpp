#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        vector<int> v,vec;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int dif;
        for(int i=0;i<n-1;i++)
        {
            dif = v[i+1]-v[i];
            vec.push_back(dif);
        }
        sort(vec.begin(),vec.end());
        cout<<vec[0]<<endl;
    }
}
