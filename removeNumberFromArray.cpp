#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t,x,y;
  vector<int>vec;
  cin>>t>>y;
  while(t--){
    cin>>x;
    vec.push_back(x);
  }
  vec.erase(remove(vec.begin(), vec.end(), y), vec.end());
  copy(vec.begin(),vec.end(),ostream_iterator<int>(cout, " "));
  cout<<endl;

}