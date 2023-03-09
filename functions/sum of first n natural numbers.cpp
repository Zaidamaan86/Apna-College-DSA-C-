#include<bits/stdc++.h>
using namespace std;

int sum(int n){
	 int s=0;
	 s= (n*(n+1))/2;
	 return s;
}
 int main(){
 	int n;
 	cout<<"enter the number :"<<endl;
 	cin>>n;
 	cout<<"Sum of first "<<n<<" natural number is: ";
 	cout<< sum(n);
 }
