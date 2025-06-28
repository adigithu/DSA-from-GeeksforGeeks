#include<iostream>
using namespace std;
class gfg{
public:
	unsigned int countSetBits(int n)
	{
		unsigned int count=0;
		while(n){
			n &= (n-1);
			count++;
		}
		return count;
	}
};
int main()
{
	gfg g;
	int n;
    cout<<"Enter a number:";
    cin>>n;
	cout<<"The number of set bits is "<<g.countSetBits(n);
	return 0;
}