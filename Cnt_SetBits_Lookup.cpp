#include<bits/stdc++.h>
using namespace std;
int BitsSetTable256[256];
void initialize()
{
	BitsSetTable256[0]=0;
	for(int i=0;i<256;i++)
	{
		BitsSetTable256[i]=(i & 1) + BitsSetTable256[i/2];
	}
}
int countSetBits(int n)
{
	return (BitsSetTable256[n & 0xff] +
			BitsSetTable256[(n >> 8) & 0xff] +
			BitsSetTable256[(n >> 16) & 0xff] +
			BitsSetTable256[n >> 24]);
}
int main()
{
	initialize();
	int n;
    cout<<"Enter a number:";
    cin>>n;
	cout<<"The number of set bits is "<<countSetBits(n);
}