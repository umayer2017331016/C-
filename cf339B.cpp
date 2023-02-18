#include<bits/stdc++.h>
using namespace std;
int main(){

int n , m;
cin>>n>>m;
vector<int>v;
int x,cont=0;
for(int i=0;i<m;i++){
    cin>>x;
    v.push_back(x);
}

int ans = v[0]-1;

for(int i=1;i<m;i++){
    if(v[i]>v[i-1]){
        cont+=(v[i]-v[i-1]);
    }
    else if(v[i]==v[i-1]){
        continue;
    }
    else{
        cont+=(n-(v[i-1]-v[i]));
    }
}
cout<<ans+cont<<endl;

}
