#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[105],minn=1,maxx=1;
    for(int i=1;i<=n;i++)
		cin>>arr[i];
	for(int i=2;i<=n;i++)
	{
		if(arr[i]>arr[minn])
			minn=i;
		if(arr[i]<=arr[maxx])
			maxx=i;
	}
	if(minn<maxx)
		cout<<minn-1+n-maxx;
	else{
	if(minn>maxx)
		cout<<minn-1+n-maxx-1;
	else
		cout<<0;
	}
}
