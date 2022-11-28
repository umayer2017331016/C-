#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    sort(s.begin(),s.end());
    int l=s.size(),count=0;
    //cout<<s<<endl;
    for(int i=0;i<t;i++){
        if(s[i]!=s[i+1])
            count++;
    }
    if(count==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
