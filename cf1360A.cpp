    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        double t,a,b;
        cin>>t;
        while(t--)
        {
            cin>>a>>b;
          //  if(a==b){
            //    cout<<(a*2)*(a*2)<<endl;
            //}
            //else if(a<=b/2 || a/2>=b){
              //  int x = max(a,b);
                //cout<<x*x<<endl;
            //}
            //else{
              //  int y = max(a,b);
                //cout<<(y+1)*(y+1)<<endl;
            //}
            cout<<pow(max(max(a,b),min(a,b)*2),2)<<"\n";
        }
    }