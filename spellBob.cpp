#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int a[3]={0};
        for(int i=0;i<3;i++)
        {
            if(s1[i]=='b' || s2[i]=='b')
                a[i]=1;
        }
        int b=0;
        for(int i=0;i<3;i++)
        {
            if(a[i]==1)
                b++;
        }
        if(b<=1)
            cout<<"no"<<endl;
        else if(b==2)
        {
            int position=0;
            for(int i=0;i<3;i++)
            {
                if(a[i]==0)
                    position=i;
            }
            if(s1[position]=='o' || s2[position]=='o')
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
        else if(b==3)
        {
            int o=0;
            for(int i=0;i<3;i++)
            {
                if(s1[i]=='o' || s2[i]=='o')
                    o++;
            }
            if(o==0)
                cout<<"no"<<endl;
            else
                cout<<"yes"<<endl;
        }
    }
}
