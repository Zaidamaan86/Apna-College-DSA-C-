#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Enter the sides of triangle"<<endl;
	cin>>a>>b>>c;
	int m= max(c,max(a,b));
	if(pow(m,2)==(pow(a,2)+pow(b,2)) || pow(m,2)==(pow(a,2)+pow(c,2)) || pow(m,2)==(pow(c,2)+pow(b,2)))
	cout<<"Pythagorean triplet exist: "<<endl;
	else
	cout<<"No Pythagorean triplet exist: "<<endl;	
}
