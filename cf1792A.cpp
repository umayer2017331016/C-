#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n+2], cont=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1)
             cont++;
        }
        cout<<cont<<endl;
        cout<<ceil((cont*1.0)/2)+(n-cont)<<endl;
    }
}
