#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,arr[5];
	cin>>n;
	int maxno= INT_MIN;
	int minno= INT_MAX;
	
	for (int i=0;i<n;i++){
		cin>>arr[i];	
	}
	for (int i=0;i<n;i++){
		maxno=max(maxno,arr[i]);
		minno=min(minno,arr[i]);
	}	
	cout<<"max= "<<maxno<<endl;
	cout<<"min= "<<minno<<endl;		
}
