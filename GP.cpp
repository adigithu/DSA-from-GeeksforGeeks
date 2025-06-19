#include<iostream>
#include<cmath>
using namespace std;
class Solution {
  public:
    double termOfGP(int A, int B, int N) {
        double r=(double)B/A;
        return A*pow(r,N-1);
    }
};
int main(){
    int A,B,N;
    cout<<"Enter the first term:";
    cin>>A;
    cout<<"Enter the second term:";
    cin>>B;
    cout<<"Enter the value of N:";
    cin>>N;
    Solution sol;
    cout<<"The value of the "<<N<<"th term of the given GP is "<<sol.termOfGP(A,B,N);
    return 0;
}