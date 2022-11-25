#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.length();
    for(int i=0;i<l;i+=2)
        cout<<s[i];
}