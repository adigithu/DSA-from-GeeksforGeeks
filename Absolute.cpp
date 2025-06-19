#include <iostream>
using namespace std;
class Solution{
public:
    int absolute(int I){
        return (I < 0) ? -I : I;
    }
};
int main(){
    int num;
    cout<<"Enter an integer:";
    cin>>num;
    Solution sol;
    int absValue=sol.absolute(num);
    cout<<"Absolute value of the given number is "<<absValue<<endl;
    return 0;
}
