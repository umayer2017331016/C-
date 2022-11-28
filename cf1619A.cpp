#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while (t--)
    {
        /* code */
        cin>>s;
        int l=s.size(); string pre,sub;
        int a=l/2;
        for(int i=0;i<a;i++)
            pre+=s[i];
        for(int j=a;j<l;j++)
            sub+=s[j];

        if(pre==sub) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;    

    }
    
}