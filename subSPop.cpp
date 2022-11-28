#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  cin >> str;
  str.pop_back();
  while (true)
  {
    string pre,sup;
    int a=str.length()/2;
    for(int i=0;i<a;++i){
      pre+=str[i];
    }
    for(int i=a;i<str.length();++i){
      sup+=str[i];
    }
    if (pre==sup){
      cout << str.length() <<"\n";
      break;
    }
    str.pop_back();
  }
}
