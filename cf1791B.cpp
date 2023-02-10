#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n;
        int contL=0,contU=0,cont=0;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='U'){
                contU++;
                if(contU==1 && contL==1){
                    cont++;
                    cout<<"YES"<<endl;
                    break;
                }
            }
            else if(s[i]=='D'){
                contU--;
                if(contU==1 && contL==1){
                    cont++;
                    cout<<"YES"<<endl;
                    break;
                }
            }
            else if(s[i]=='R'){
                contL++;
                if(contU==1 && contL==1){
                    cont++;
                    cout<<"YES"<<endl;
                    break;
                }
            }
            else{
                contL--;
                if(contU==1 && contL==1){
                    cont++;
                    cout<<"YES"<<endl;
                    break;
                }
            }
        }
        if(cont==0)
        cout<<"NO"<<endl;
    }

    return 0;
}
