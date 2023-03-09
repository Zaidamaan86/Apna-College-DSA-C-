#include<iostream>

using namespace std;
int main()
{
	int i,j,n,sp.np;
	cout<<"enter the num"<<endl;cin>>n;
	sp=n-1;
	np=1;
	for(i=1;i<=n;i++)
	{
		for(j=sp;sp>=1;sp--)
			cout<<" ";
		sp--;
		for(j=1;j<=5;j++)
			cout<<"* ";
	}

}	

