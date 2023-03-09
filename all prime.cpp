#include<iostream>
using namespace std;

int main ()
{
  int i,n,c=0,a,b;
  cin>>a>>b;
  for(n=a;n<=b;n++){
    for(i=2;i<n;i++){
        if(n%i==0)
            break;
    }
    if(i==n)
        cout<<n<<endl;
    c=0;
    }
}
