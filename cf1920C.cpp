#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        //int arr[n][n-1];
        int arr[n*n];
      //  for(int i=0;i<n;i++){
        //    for(int j=0;j<n-2;j++){
        //        cin>>arr[i][j];
        //    }
      //  }
        for(int i=1;i<=n*(n-1);i++){
            cin>>arr[i];
        }
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
