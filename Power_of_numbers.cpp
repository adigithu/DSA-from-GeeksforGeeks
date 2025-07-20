#include<iostream>
using namespace std;
const int MOD=1000000007;
int reverseNum(int n){
    int rev=0;
    while(n>0){
        rev=rev*10+n%10;
        n/=10;
    }
    return rev;
}
long long power(long long n, long long r){
    if(r==0){
        return 1;
    }
    long long half=power(n,r/2)%MOD;
    long long result=(half*half)%MOD;
    if(r%2==0){
        return result;
    }
    else{
        return (n*result)%MOD;
    }
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int r=reverseNum(n);
    long long result=power(n, r);
    cout<<n<<" raised to the power of its reverse ("<<r<<") is " << result << endl;
    return 0;
}