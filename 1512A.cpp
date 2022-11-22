#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int vec[n+2];
            for(int i=1;i<=n;i++)
            {
                cin>>vec[i];
            }
            for(int j=1;j<=n-2;j++)
            {
                if(vec[j]!=vec[j+1] && vec[j]!=vec[j+2]){
                    cout<<j<<endl;
                    break;
                }
                if(vec[j+1]!=vec[j] && vec[j+1]!=vec[j+2]){
                    cout<<j+1<<endl;
                    break;
                }
                if(vec[j+2]!=vec[j] && vec[j+2]!=vec[j+1]){
                    cout<<j+2<<endl;
                    break;
                }
            }
    }

}
