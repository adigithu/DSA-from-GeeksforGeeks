#include<iostream>
using namespace std;
class Solution {
  public:
    int modInverse(int a, int m) {
        for(int x=1;x<m;x++){
            if((1LL*a*x)%m==1){
                return x;
            }
        }
        return -1;
    }
};
int main(){
    int a,m;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>m;
    Solution sol;
    cout<<"The value of modular inverse is "<<sol.modInverse(a,m);
    return 0;
}