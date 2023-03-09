#include<bits/stdc++.h>
using namespace std;

void fib(int n){
	int t1=0,t2=1,t3;
	cout<<t1<<endl;
	cout<<t2<<endl;
	for(int i=3;i<=n;++i){
		t3=t1+t2;
		cout<<t3<<endl;
		t1=t2;
		t2=t3;
	}
	return;
}


int main(){
	int n;
	cout<<"enter the number till fibenacci series"<<endl;
	cin>>n;
	cout<<" fibenacci series till "<<n<<"th term: "<<endl;
	fib(n);
}
