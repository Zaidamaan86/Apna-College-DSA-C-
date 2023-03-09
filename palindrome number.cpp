#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,d,r=0;
	cout<<"enter the number"<<endl; cin>>n;
	while(n>0){
		d=n%10;
		r=r*10+d;
		n=n/10;
	}
	cout<<"reverse: "<<r<<endl;
	
}
