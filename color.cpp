#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count=0;
    cin>>t;
    char arr[t+1];
    for(int i=0;i<t;i++)
        cin>>arr[i];
    for(int i=0;i<t;i++)
    {
        if(arr[i]=='P')
        {
            count++;
            break;
        }
    }
    for(int i=0;i<t;i++)
    {
        if(arr[i]=='W')
        {
            count++;
            break;
        }
    }
    for(int i=0;i<t;i++)
    {
        if(arr[i]=='G')
        {
            count++;
            break;
        }
    }
    for(int i=0;i<t;i++)
    {
        if(arr[i]=='Y')
        {
            count++;
            break;
        }
    }
     switch (count) {
        case 0:
            cout << "Zero ";
            break;
        case 1:
            cout << "One ";
            break;
        case 2:
            cout << "Two ";
            break;
        case 3:
            cout << "Three ";
            break;
        case 4:
            cout << "Four ";
            break;

}
}
