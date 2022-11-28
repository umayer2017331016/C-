#include<bits/stdc++.h>
using namespace std;

void reverseStr(string& str)
{
    int n = str.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

int main()
{

    int t,l;
    string s,temp;
    cin>>t;
    while(t--)
    {
        cin>>s;
        string b=s;
        reverse(s.begin(),s.end());
        cout<<s+b<<endl;
    }
}
