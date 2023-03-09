#include<bits/stdc++.h>
using namespace std;

int todecimal(long num){
	int i=0,d,N=num,sum=0;
	while(N>0){
		d=N%10;
		sum= sum+ (d*pow(2,i));
		i++;
		N=N/10;
	}
	return sum;
}

int tobinary(long num){
	int i=1,d,N=num,r=0;
	while(N>0){
		d=N%2;
		r=(d*i)+r;
		i*=10;
		N=N/2;
	}
	return r;
}

int main()
{
	char ch;
	long x;
	long num;
	
	while(1){	
	cout<<" Enter your choice "<<endl;
	cout<<" a: Decimal to Binary "<<endl;
	cout<<" b: Binary to Decimal "<<endl; 
	cout<<" c: exit "<<endl; cin>>ch;
	cout<<" Enter the number "<<endl; cin>>num;

	
	switch(ch){
		case 'a': x= tobinary(num);
				cout<<x<<endl;
				break;
		case 'b': x= todecimal(num);
				cout<<x<<endl;
				break;
		case 'c': exit(0);
				break;
		default: cout<<"wrong choice!!";
	}
	}
}
