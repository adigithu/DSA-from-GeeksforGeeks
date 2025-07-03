#include<iostream>
using namespace std;
class Solution{
public:
    unsigned int swapBits(unsigned int n){
        unsigned int evenBits=n & 0xAAAAAAAA;
        unsigned int oddBits=n & 0x55555555;
        evenBits>>=1;
        oddBits<<=1;
        return (evenBits | oddBits);
    }
};
int main(){
    Solution sol;
    unsigned int n;
    cout<<"Enter a number:";
    cin>>n;
    unsigned int result=sol.swapBits(n);
    cout<<"Result after swapping odd and even bits is "<<result<<endl;
    return 0;
}
