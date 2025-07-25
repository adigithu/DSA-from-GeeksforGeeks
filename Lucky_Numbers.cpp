#include<iostream>
using namespace std;
class Solution{
public:
    bool isLucky(int n,int counter=2){
        if(counter>n){
            return true;
        }
        if(n%counter==0){
            return false;
        }
        return isLucky(n-n/counter,counter+1);
    }
};
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    Solution obj;
    if(obj.isLucky(n)){
        cout<<n<<" is a lucky number"<<endl;
    }
    else{
        cout<<n<<" is not a lucky number"<<endl;
    }
    return 0;
}