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
	int i,j,n;
	cout<<"enter the number"<<endl;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
		 cout<< fact(i)/(fact(i-j)*fact(j))<<" ";
		}
		cout<<endl;
	}
	}
	


