#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,a,b,c;
    cin>>t;
    while(t--)
    {
        vector<int>vec;
        for(int i=0;i<3;i++)
        {
            cin>>x;
            vec.push_back(x);
        }
        sort(vec.begin(),vec.end());
        cout<<vec[1]<<endl;
    }
}
