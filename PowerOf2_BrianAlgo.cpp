#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(long long n)
{
	return (n!=0) && ((n & (n-1))==0);
}
int main()
{
	int n;
    cout<<"Enter a number:";
    cin>>n;
	isPowerOfTwo(n) ? cout<<"Yes"<<endl : cout<<"No"<<endl;
	return 0;
}