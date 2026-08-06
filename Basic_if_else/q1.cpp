#include <iostream>
using namespace std;
int main(){
  int a;
  cout<<"enter the number:";
  cin>>a;
  if(a<0){
    cout<<"number is negative";
  }
  else if(a==0){
    cout<<"number is zero";
  }
  else{
    cout<<"number is positive";
  }
  return 0;
}