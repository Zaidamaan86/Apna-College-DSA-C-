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
	int n;
	cout<<"enter the number of factorial to be found"<<endl;
	cin>>n;
	cout<<"Factorial of "<<n<<" is :"<< fact(n);
}
