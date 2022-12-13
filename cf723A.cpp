#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,f;
    cin>>a>>b>>c;
    d=abs(a-b)+abs(b-c)+abs(a-c);
    cout<<d/2<<endl;
}
