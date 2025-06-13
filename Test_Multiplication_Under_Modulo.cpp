#include<iostream>
using namespace std;
class Solution{
    public:
        int modMultiply(long long a, long long b){
            long long mod=1000000007;
            return (a%mod*b%mod)%mod;
        }
};
int main(){
    Solution sol;
    long long a1,b1;
    cout<<"Enter the first number:";
    cin>>a1;
    cout<<"Enter the second number:";
    cin>>b1;
    cout<<"Output: "<<sol.modMultiply(a1,b1)<<endl;
    return 0;
}