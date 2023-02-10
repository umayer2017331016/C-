#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
	while(t--)
	{
         int n;
         cin>>n;
         int ans =0;
         if(n<=9) ans = n;
         else if(n>=10 &&n <=99 ){
                ans = 9+(n/10);

         }
         else if(n>=100 && n<=999)
         {
             ans = 18 + (n/100);
         }
         else if(n>=1000 && n<=9999)
         {
             ans = 27 + (n/1000);
         }
         else if(n>=10000 && n<=99999)
         {
             ans = 36 + (n/10000);
         }
          else if(n>=100000 && n<=999999)
         {
             ans = 45 + (n/100000);
         }
         cout<<ans<<endl;
        }
}
