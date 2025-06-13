#include<bits/stdc++.h>
using namespace std;
int countDigit(int n){
    if(n==0){
        return 1;
    }
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}
int main(){
    long long num;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"The count of digits in the given number is "<<countDigit(num);
    return 0;
}