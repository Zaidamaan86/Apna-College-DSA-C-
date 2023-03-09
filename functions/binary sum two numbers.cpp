#include<bits/stdc++.h>
using namespace std;


int add(int a, int b){
	int r=0,sum=0,carry=0,da,db,i=0;
	while(a>0 || b>0){
		da=a%10;
		db=b%10;
		r=da+db+carry;
		if(r==0){
			sum=(sum*i)+0;
			carry=0;
			i*=10;
		}
		else if(r==1){
			sum=(sum*i)+1;
			carry=0;
			i*=10;
		}
		else if(r==2){
			sum=(sum*i)+0;
			carry=1;
				i*=10;
		}
		else if(r==3){
			sum=(sum*i)+1;
			carry=1;
			i*=10;
		}
	a=a/10;
	b=b/10;
    }
    return sum;
}
int main(){
	int a,b;
	cout<<"Enter the binary digits to be add: "<<endl;
	cin>>a>>b;
	cout<<add(a,b);
	
}
