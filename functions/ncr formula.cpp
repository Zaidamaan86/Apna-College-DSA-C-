#include<bits/stdc++.h>
using namespace std;

int fact(int n){
	int r=1;
	while(n>0){
		r*=n;
		n--;
	}
	return r;
}
int main(){
	int n,r,ans;
	cout<<"enter the vaules of 'n' and 'r' "<<endl;
	cin>>n>>r;
	if(n>r){
	
		ans=(fact(n))/(fact(n-r)*fact(r));
		cout<<ans;
	}
	else
		cout<<"n must be greater then r ";
}
