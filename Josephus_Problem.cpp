#include<iostream>
using namespace std;
int josephus(int n,int k){
  if(n==1){
    return 1;
  }
  else{
    return (josephus(n-1,k)+k-1)%n+1;
  }
}
int main(){
  int n,k;
  cout<<"Enter the value of n:";
  cin>>n;
  cout<<"Enter the value of k:";
  cin>>k;
  cout<<"The chosen place is "<<josephus(n,k);
  return 0;
}