#include<iostream>
using namespace std;
class Solution{
public:
    int digitalRoot(int n){
        if(n<10){
            return n;
        }
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return digitalRoot(sum);
    }
};
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    Solution obj;
    int result=obj.digitalRoot(n);
    cout<<"Digital root of "<<n<<" is "<<result<<endl;
    return 0;
}