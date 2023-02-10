#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,count=0;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++) cin>>vec[i];

        for(int i=1;i<n;i++){
            if(vec[i]%2==vec[i-1]%2)
                count++;
        }
        cout<<count<<endl;
    }
}
