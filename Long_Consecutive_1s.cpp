#include<iostream>
using namespace std;
class Solution{
public:
    int maxConsecutiveOnes(int N){
        int count=0;
        while(N!=0){
            N=(N&(N<<1));
            count++;
        }
        return count;
    }
};
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    Solution obj;
    int result=obj.maxConsecutiveOnes(n);
    cout<<"Longest consecutive 1's in binary:"<<result<<endl;
    return 0;
}