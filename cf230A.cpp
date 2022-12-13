#include<bits/stdc++.h>
using namespace std;

 string dragon(int s,int n){

 }
int main()
{
    int s,n;
    cin>>s>>n;
    vector<pair <int,int>> v;
    //dragon(s,n);
    int cont=0,temp=n;
      while (n--)
    {
        /* code */
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<temp;i++){
            if(s>v[i].first){
            s+=v[i].second;
            cont++;
           // cout<<s<<endl;
           // cout<<cont<<endl;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(cont==temp){
            cout<<"YES"<<endl;
    }

}
