#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a==b){
        return a;
    }
    if(a>b){
        return gcd(a-b,a);
    }
    return gcd(a,b-a);
}
int main(){
    int a,b;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a,b);
    return 0;
}