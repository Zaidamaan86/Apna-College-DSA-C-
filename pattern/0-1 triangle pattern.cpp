#include<iostream>

using namespace std;
int main()
{
	int i,j,n,s=1;
	cout<<"enter the num"<<endl;cin>>n;
	for(i=1;i<=n;i++)
	{
		(i%2==0)?(s=0):(s=1);
		
		for(j=1;j<=i;j++)
		{
			cout<<s<<" ";
			if(s==1)
				s=0;
			else
				s=1;
		}
		cout<<endl;
	}
}
