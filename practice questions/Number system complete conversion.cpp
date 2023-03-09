#include<bits/stdc++.h>
using namespace std;

int tobinary(int num){
	int d,n=num,r=0,i=1;
	while(n>0){
		d=n%2;
		r=(d*i)+r;
		i*=10;
		n=n/2;
	}
	return r;
}

int todecimal(int num){
	int d,n=num,r=0,i=0;
	while(n>0){
		d=n%10;
		r=r+(pow(2,i)*d);
		i++;
		n=n/10;
	}
	return r;
}
 int decimaltoct(int num){
 	int d,n=num,r=0,i=1;
	while(n>0){
		d=n%8;
		r=(d*i)+r;
		i*=10;
		n=n/8;
	}
	return r;
 }

int octtodecimal(int num){
	int d,n=num,r=0,i=0;
	while(n>0){
		d=n%10;
		r=r+(pow(8,i)*d);
		i++;
		n=n/10;
	}
	return r;
	
}
	
}

int main(){
	char ch;
	int x,num;
	
	while(1){	
	cout<<" Enter your choice "<<endl;
	cout<<" a: Decimal to Binary "<<endl;
	cout<<" b: Binary to Decimal "<<endl;
	cout<<" c: octal to Decimal "<<endl;
	cout<<" d: hexadecimal to Decimal "<<endl;
	cout<<" e: Decimal to octal "<<endl;
	cout<<" f: Decimal to hexadecimal; "<<endl; 
	cout<<" g: exit "<<endl; cin>>ch;
	cout<<" Enter the number "<<endl; cin>>num;

	
	switch(ch){
		case 'a': x= tobinary(num);
				cout<<x<<endl;
				break;
		case 'b': x= todecimal(num);
				cout<<x<<endl;
				break;
		case 'c': x= octtodecimal(num);
				cout<<x<<endl;
				break;
//		case 'd': x= hextodecimal(num);
//				cout<<x<<endl;
//				break;
		case 'e': x= decimaltoct(num);
				cout<<x<<endl;
				break;
//		case 'f': x= decimaltohex(num);
//				cout<<x<<endl;
//				break;
		case 'g': exit(0);
				break;
		default: cout<<"wrong choice!!"<<endl;
	}
	}
}
