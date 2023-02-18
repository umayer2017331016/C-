/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int q,y;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>y;
        if(y<v[0]){
            cout<<0<<endl;
        }
        else if(y>=v[n-1]){
            cout<<n<<endl;
        }
        else{
        for(int j=0;j<n;j++){
            if(v[j]>y){
                cout<<j<<endl;
                break;
            }
        }
        }
    }


}
**/
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int m,n,k,ans;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    cin>>m;
    sort(v.begin(),v.end());
    while(m--)
    {
        cin>>k;
        ans=upper_bound(v.begin(),v.end(), k)-v.begin();
        cout<<ans<<endl;
    }
return 0;
}
