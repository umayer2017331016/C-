#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    if(n%2==0)
    {
        int temp = n/2;
        cout<<arr[temp]<<endl;
    }
    if(n%2!=0){
        int temp = (n+1)/2;
        cout<<arr[temp]<<endl;
    }

}
