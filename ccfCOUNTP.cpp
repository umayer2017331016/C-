#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
       long long int n,s1=0,s2=0,div;
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        for(int i=0;i<n;i++){
            s1+=arr[i];
        }

        if(s1%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
}