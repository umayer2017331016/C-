#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int n,x1,y1,x2,y2;
        cin>>n>>x1>>y1>>x2>>y2;
        int x=abs(x2-x1);
        int y=abs(y2-y1);
        cout<<x+y<<endl;
    }
    
}