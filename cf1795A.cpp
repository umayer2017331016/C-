#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,m;
        cin>>n>>m;
        string s,t;
        cin>>s>>t;
        reverse(t.begin(),t.end());
        s+=t;
        int cont=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1]){
                cont++;
                if(cont>2)
                    break;
            }
        }
        if(cont<2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
