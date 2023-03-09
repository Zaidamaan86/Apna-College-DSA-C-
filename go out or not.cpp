#include<iostream>
using namespace std;

int main ()
{
  int pm=3000;
  for(int date=1;date<=30;date++){
      
      if(date%2!=0)
        continue;
      if(pm==0){
        cout<<date<<" PM is over "<<pm<<endl;
        break; }
      cout<<date<<" go out today "<<pm<<endl;
      pm-=300;
  }
}