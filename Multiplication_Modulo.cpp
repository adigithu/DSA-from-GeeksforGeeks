#include<iostream>
using namespace std;
class Solution {
  public:
    long long MulUnderModulo(long long a, long long b) {
        long long M=1000000007;
        return ((a%M)*(b%M))%M;
    }
};
int main(){
    int a,b;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    Solution sol;
    cout<<"The result of multiplication under modulo is "<<sol.MulUnderModulo(a,b);
    return 0;
}