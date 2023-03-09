#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
	int i,c=0;
	for(i=2;i<n;i++){
		if(n%i==0)
		 c++;	
	}
	if(c==0)
	cout<<n<<endl;
}

int main(){
	int a,b;
	cout<<"Enter the range :"<<endl;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		isPrime(i);
	}	
}
