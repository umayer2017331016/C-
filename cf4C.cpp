#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;
    map<string,int> str;
    while (t--)
    {
        /* code */
        cin>>s;
        if(str[s]==0){
            cout<<"Ok"<<"\n";
            str[s]++;
        }
        else{
            cout<<s<<str[s]<<"\n";
            str[s]++;
        }
    }
}
    /* for(int i=0;i<t;i++){
        cin>>s;
        str.push_back(s);
    }
    if(t>1){
        int m=0;
        cout<<"Ok"<<endl;
        for(int i=1;i<t;i++){
            for(int j=i-1;j>=0;j--){
                if(str[i]==str[j]){
                    m++;
                }
            }
            if(m>0){
                cout<<str[i]<<m<<endl;
                m=0;
            }
            else
                cout<<"OK"<<endl;
        }
    }
    else{
        cout<<"Ok"<<endl;
    }
    */

