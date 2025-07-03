#include<iostream>
using namespace std;
int countBitsFlip(int a,int b){
    int xorVal=a ^ b;
    int count=0;
    while(xorVal){
        xorVal &=(xorVal-1);
        count++;
    }
    return count;
}
int main(){
    int a,b;
    cout<<"Enter two integers a and b: ";
    cin>>a>>b;
    int result=countBitsFlip(a,b);
    cout<<"Number of bits to be flipped: "<<result<<endl;
    return 0;
}
