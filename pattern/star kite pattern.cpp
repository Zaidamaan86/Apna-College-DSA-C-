#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,n;
	cout<<"enter the num"<<endl;cin>>n;
	for(i=1;i<=n;++i)
	{
		for(j=1;j<=n-i;++j)
			cout<<"  ";
		for(j=1;j<=i;++j)
			cout<<" *";
		for(j=1;j<i;j++)
			cout<<" *";
		cout<<endl;
	}
	for(i=n-1;i>=1;--i)
	{
		for(j=1;j<=n-i;++j)
			cout<<"  ";
		for(j=1;j<=i;++j)
			cout<<" *";
		for(j=1;j<i;j++)
			cout<<" *";
		cout<<endl;
	}
}
