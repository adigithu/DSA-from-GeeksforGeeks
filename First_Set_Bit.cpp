#include<iostream>
using namespace std;
int getFirstSetBit(int n){
    if(n == 0){
        return 0;
    }
    int position=1;
    while((n & 1)==0){
        n=n>>1;
        position++;
    }
    return position;
}
int main(){
    int n;
    cout<<"Enter an integer: ";
    cin>>n;
    int result=getFirstSetBit(n);
    cout << "The position of the first set bit (from right) is: " << result << endl;
    return 0;
}
