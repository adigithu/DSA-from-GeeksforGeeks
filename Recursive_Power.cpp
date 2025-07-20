#include<iostream>
using namespace std;
class Solution{
public:
    int RecursivePower(int n,int p){
        if(p==0){
            return 1;
        }
        return n*RecursivePower(n,p-1);
    }
};
int main(){
    int n,p;
    cout<<"Enter the base (n):";
    cin>>n;
    cout<<"Enter the power (p):";
    cin>>p;
    Solution sol;
    int result=sol.RecursivePower(n,p);
    cout<<n<<" raised to the power "<<p<<" is "<<result<<endl;
    return 0;
}