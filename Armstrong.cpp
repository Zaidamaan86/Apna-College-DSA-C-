#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,d,r=0;
	cout<<"enter the number"<<endl; cin>>n;
	int num=n;
	while(n>0){
		d=n%10;
		r=r+pow(d,3);
		n=n/10;
	}
	(num==r)? (cout<<"Armstromg"):(cout<<"Not Armstrong");

	
}
