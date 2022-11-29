#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,x;
  vector<int>vec;
  cin>>t;
  while(t--){
    cin>>x;
    vec.push_back(x);
  }
  sort( vec.begin(), vec.end() );
  vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
  cout<<vec.size()<<endl;
}
