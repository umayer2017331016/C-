#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main(){
    Faster;
    int t;                  cin>>t;
    while(t--){
        int n;              cin>>n;

        if(n%2==0){
            cout<<(n/2)<<" "<<(n/2)<<endl;
            continue;
        }

        int x=n/2,y=n-x;

        if(n%20==19){
            string c=to_string(n);
            string a=c,b=c;
            int SOD1=0,SOD2=0;

            for(int i=0;i<a.size();i++){
                int v1,v2;
                v1=(c[i]-'0')/2;
                v2=(c[i]-'0')-v1;
                if(v1==v2){
                    a[i]='0'+v1;
                    b[i]='0'+v2;
                }
                if(v1>v2)swap(v1,v2);
                if(SOD1>=SOD2){
                    b[i]='0'+v2;
                    a[i]='0'+v1;
                    SOD2+=(b[i]-'0');
                    SOD1+=(a[i]-'0');
                }
                else{
                    a[i]='0'+v2;
                    b[i]='0'+v1;
                    SOD2+=(b[i]-'0');
                    SOD1+=(a[i]-'0');
                }
            }
            reverse(a.begin(),a.end());
            reverse(b.begin(),b.end());
            while(b.back()=='0')b.pop_back();
            while(a.back()=='0')a.pop_back();
            reverse(a.begin(),a.end());
            reverse(b.begin(),b.end());
            cout<<a<<" "<<b<<endl;
        }
        else{
            cout<<x<<" "<<y<<endl;
        }
    }
    return 0;
}
