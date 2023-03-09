#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,n,sp;
	cout<<"enter the num"<<endl;cin>>n;
	sp=n-1;
	for(i=1;i<=n;++i)
	{
		for(j=sp;j>=1;j--)
			cout<<" ";
		sp--;
		for(j=1;j<=i;++j)
			cout<<" "<<j;
		cout<<endl;
	}
}
