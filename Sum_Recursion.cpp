#include <iostream>
using namespace std;
int recurSum(int n)
{
    if(n<=1){
        return n;
    }
    return n + recurSum(n-1);
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"The sum is "<<recurSum(n)<<endl;
    return 0;
}