#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    return b==0? a:gcd(b,a%b);
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