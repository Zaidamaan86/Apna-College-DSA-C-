#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int lb,int ub,int key){
	int mid=(lb+ub)/2;
	if (arr[mid]==key)
		return mid;
		
		
	if(arr[mid]<key){	
		return binarysearch(arr,mid+1,ub,key);}
	else{
		return binarysearch(arr,lb, mid-1,key);}
	return -1;
}
int main(){
	int n,key,arr[10];
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}
	cout<<"enter key"<<endl;
	cin>>key;
	int ans=binarysearch(arr,0,n-1,key);
	(ans!=-1)
		?cout<<"found at "<<ans+1<<endl
		:cout<<"Not found "<<endl;
}

	

