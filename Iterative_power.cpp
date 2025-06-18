#include <iostream>
using namespace std;
int power(int x, unsigned int y)
{
	int res=1;
	while(y>0){
		if(y&1)
			res=res*x;
		y=y>>1;
		x=x*x;
	}
	return res;
}
int main()
{
	int x;
	unsigned int y;
    cout<<"Enter the value of x:";
    cin>>x;
    cout<<"Enter the value of y:";
    cin>>y;
	cout<<x<<" raised to the power "<<y<<" is "<<power(x, y);
	return 0;
}