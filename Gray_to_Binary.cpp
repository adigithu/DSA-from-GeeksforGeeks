#include<iostream>
using namespace std;
class Solution{
public:
    int grayToBinary(int n){
        int result=n;
        while(n>>=1){
            result^=n;
        }
        return result;
    }
};
int main(){
    int n;
    cout<<"Enter a number (Gray code in decimal):";
    cin>>n;
    Solution obj;
    int binary=obj.grayToBinary(n);
    cout<<"Binary equivalent in decimal:"<<binary<<endl;
    return 0;
}
