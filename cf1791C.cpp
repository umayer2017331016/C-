
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
        int j=n-1;
        for(int i=0;i<n;i++){
            if(j<i){
                cout<<n-cont<<endl;
                break;
            }
            else if((s[i]=='0' && s[j]=='1')||(s[i]=='1' && s[j]=='0')){
                cont+=2;
                j--;
            }
            else{
                cout<<n-cont<<endl;
                break;
            }
        }
    }
}
