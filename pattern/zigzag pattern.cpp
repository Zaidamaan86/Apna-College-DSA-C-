#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,n;
	cout<<"enter the number: "; cin>>n; cout<<endl;
	for(i=1;i<=3;i++){
		for(j=1;j<=n;j++){
			(((i+j)%4==0) || ((i==2) && (j%4==0)))? (cout<<" * ") : (cout<<"   "); 
			}
		cout<<endl;
		}
	}
		
	
	

