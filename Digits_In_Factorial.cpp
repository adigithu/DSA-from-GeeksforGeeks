#include<iostream>
#include<cmath>
using namespace std;
class Solution{
  public:
    int digitsInFactorial(int N) {
        if(N==0 || N==1){
            return 1;
        }
        double digits=0;
        for (int i=2;i<=N;i++){
            digits+=log10(i);
        }
        return floor(digits)+1;
    }
};
int main(){
    int N;
    cout<<"Enter the value of n:";
    cin>>N;
    Solution sol;
    cout<<"The number of digits in the factorial of "<<N<<" is "<<sol.digitsInFactorial(N);
    return 0;
}