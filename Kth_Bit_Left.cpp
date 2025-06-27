#include<bits/stdc++.h>
using namespace std;
void isKthBitSet(int n,int k)
{
	if(n & (1<<(k-1))){
        cout<<"SET";
    }
	else{
        cout<<"NOT SET";
    }
}
int main()
{
	int n,k;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Enter the bit number:";
    cin>>k;
	isKthBitSet(n, k);
	return 0;
}