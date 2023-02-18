#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cont2=0,cont3=0;
        cin>>n;
        while(!(n%2))
        {
            n=n/2;
            cont2++;
        }
        while(!(n%3))
        {
            n=n/3;
            cont3++;
        }
        if(n!=1 || cont2>cont3) cout<<-1<<endl;
        else cout<<(cont3-cont2)+cont3<<endl;
    }
}
