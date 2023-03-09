#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string str,newstr="";
	int p=-1;
	cin>>str;
	int x;
	int n=str.length();
		for(int i=0;i<n/2;i++){
			x=n-1-i;
			if(str[i]==str[x]){			
			//swap(str[i],str[n-1-i]);
				continue;
			}
			else if(str[i+1]==str[x])
			{
				cout<<str[i];
				break;
			}
			else if(str[i]==str[x-1])
			{
				cout<<str[x];
				break;
			}
		}
		cout<<str;
	}
