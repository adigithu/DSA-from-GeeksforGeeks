#include<bits/stdc++.h>
using namespace std;
unsigned int countSetBits(unsigned int n)
{
	unsigned int count = 0;
	while(n){
		count+=n & 1;
		n >>= 1;
	}
	return count;
}
int main()
{
	int n;
    cout<<"Enter a number:";
    cin>>n;
	cout<<"The number of set bits is "<<countSetBits(n);
	return 0;
}