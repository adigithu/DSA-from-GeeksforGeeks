#include<iostream>
using namespace std;
class Solution{
public:
    bool isSparse(int n){
        return (n&(n>>1))==0;
    }
};
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    Solution sol;
    if(sol.isSparse(n)){
        cout<<"True (Sparse Number)"<<endl;
    }
    else{
        cout<<"False (Not a Sparse Number)"<<endl;
    }
    return 0;
}