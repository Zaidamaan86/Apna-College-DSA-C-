#include<bits/stdc++.h>
using namespace std;

int linearsearch(int arr[],int n,int key){
	
	for(int i=0;i<n;i++){
		if(key==arr[i])
			return i;
	}
	return -1;
}
int main(){
	
	int n,key;
	cin>>n;
	
	int arr[10];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter key"<<endl;
	cin>>key;
	
	int ans=linearsearch(arr,n,key);
	if(ans!=-1){
		cout<<"found at "<<ans+1<<endl;
	}
	else
			cout<<"Not found "<<endl;
}

