#include<iostream>

using namespace std;
int main()
{
	int i,j,n;
	cout<<"enter the num"<<endl;cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(2*n);j++){
			(j>i && j<((n*2)-i+1))?(cout<<"  "):(cout<<"* ");

		}
		
		cout<<endl;
	}
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=(2*n);j++){
			(j>i && j<((n*2)-i+1))?(cout<<"  "):(cout<<"* ");

		}
		
		cout<<endl;
	}
}
