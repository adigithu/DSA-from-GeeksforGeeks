#include<iostream>
using namespace std;
class Solution {
public:
    long long fibonacci(int n){
        if(n<=0){
            return 0;
        }
        if(n==1 || n==2){
            return 1;
        }
        return fibonacci(n-1) + fibonacci(n-2);
    }
};
int main() {
    int n;
    cout<<"Enter a valid number: ";
    cin>>n;
    if(n<1){
        cout<<"Please enter a number greater than or equal to 1."<<endl;
        return 1;
    }
    Solution sol;
    long long result=sol.fibonacci(n);
    cout<<"The "<<n<<"th Fibonacci number is "<<result<<endl;
    return 0;
}