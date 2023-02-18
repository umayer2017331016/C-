#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cont=0;
    while(n!=0){
        if(n&1)
            cont++;

        n=n>>1;
    }
    cout<<cont<<endl;
}
