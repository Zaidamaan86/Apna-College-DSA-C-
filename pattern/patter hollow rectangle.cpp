#include<iostream>

using namespace std;
int main()
{
	int i,j,r,c;
	cout<<"enter the rows"<<endl;cin>>r;
	cout<<"enter the coulumns"<<endl;cin>>c;
	for(i=1;i<=r;++i)
	{
		for(j=1;j<=c;++j)
		{
			if((i>1 && i<r) && (j>1 && j<c))
				cout<<" ";
			else
			    cout<<"*";
		}
		cout<<endl;
	}

}
