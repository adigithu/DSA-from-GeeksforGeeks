#include<iostream>
using namespace std;
class Solution{
public:
    int greyConverter(int n){
        return n^(n>>1);
    }
};
int main(){
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;
    Solution obj;
    int grayCode=obj.greyConverter(n);
    cout<<"Gray code of "<<n<<" is "<<grayCode<<endl;
    return 0;
}
