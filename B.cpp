#include<bits/stdc++.h>
using namespace std;

int main(){
  string str;
  int t,n;
  cin>>t;
  while(t--)
  {
      cin>>n;
    cin>>str;
    int len = str.length();
    char temp;
  for (int i = 0; i < len; i++){
    for (int j = 0; j < len - 1; j++){
      if (str[j] > str[j + 1]){
        temp = str[j];
        str[j] = str[j + 1];
        str[j + 1] = temp;
      }
    }
  }
  int d = str[len-1];

  cout<<d-96<<endl;
  }
  return 0;
}
