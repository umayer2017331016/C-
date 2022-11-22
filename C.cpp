#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n+1];
        vector<int>v;
        for(int i =0;i<n;i++)
        {
                cin>>arr[i];
                v.push_back(arr[i]);
        }
        sort(v.begin(),v.end());
        for(int j =0;j<n;j++)
        {
            if(arr[j]==v[n-1])
            {
                cout<<v[n-1]-v[n-2]<<" ";
            }
            else{
                cout<<arr[j]-v[n-1]<<" ";
            }
        }
        cout<<endl;
    }
}
