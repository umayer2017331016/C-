#include<bits/stdc++.h>
using namespace std;
int main(){
 string pi="314159265358979323846264338327",str;
 int t;
 cin>>t;
 while(t--)
 {
     cin>>str;
     int cont=0;
     //cout<<str.size()<<endl;
     if(str[0]==pi[0]){
            int cont=1;
        for(int i=1;i<str.size();i++){
            if(str[i]==pi[i])
                cont++;
            else
                break;
        }
     cout<<cont<<endl;
     }
     else
        cout<<cont<<endl;
 }

}
