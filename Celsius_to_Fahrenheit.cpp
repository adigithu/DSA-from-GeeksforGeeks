#include<iostream>
using namespace std;
class Solution {
  public:
    double cToF(int C) {
        return (C*9.0/5.0)+32;
    }
};
int main(){
    float C;
    cout<<"Enter the degree in Celsius:";
    cin>>C;
    Solution sol;
    cout<<"The conversion in fahrenheit scale is "<<sol.cToF(C);
}