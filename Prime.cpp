#include<iostream>
using namespace std;

int main ()
{
  int i=2,n,c=0;
  cin>>n;
  while(i>1&&i<n){
      if(n%i==0){
        cout<<"Not prime";
        break;
        return 0;
      }
        i++;
  }
    if(i==n)
    cout<<"prime";
}