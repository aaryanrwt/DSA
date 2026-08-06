#include <iostream>
using namespace std;
int main(){
  int a,prime=0;
  cout<<"enter the number:";
  cin>>a;
  if (a <= 1) {
        cout << "Number is not prime";
        return 0;
    }
    
  for(int i=2;i<a;i++){
    if(a%i==0){
      prime++;
    }
  }
  if(prime==0){
    cout<<"number is prime";
  }
  else{
    cout<<"number is not prime";
  }
  return 0;
}