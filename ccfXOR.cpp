#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        long long int a,b,c,count=0;
        cin>>a>>b>>c;
        for(int i=0;i<10;i++){
            int x = ((a|i)-(a&i))+((b|i)-(b&i));
            int y = (c|i)-(c&i);
            if(x==y){
                cout<<"YES"<<endl;
                count++;
                break;
            }
        }
        if(count==0) cout<<"NO"<<endl;
       // cout<<(a|b)-(a&b)<<endl;
    }
    
}