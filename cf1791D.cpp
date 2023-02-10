#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n,cont=0;
        string s;
        cin>>n;
        cin>>s;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1])
                cont++;
        }
        if(cont==0)
            cout<<n<<endl;
        else
            cout<<(n-cont)+1<<endl;
    }
}
