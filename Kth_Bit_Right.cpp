#include<iostream>
using namespace std;
void isKthBitSet(int n,int k)
{
	if((n>>(k-1)) & 1){
        cout<<"SET";
    }
	else{
        cout << "NOT SET";
    }	
}
int main()
{
	int n,k;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Enter the bit number:";
    cin>>k;
	isKthBitSet(n,k);
	return 0;
}