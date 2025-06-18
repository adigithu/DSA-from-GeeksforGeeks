#include<bits/stdc++.h>
using namespace std;
int power(int x, unsigned int y)
{
	int temp;
	if (y == 0){
		return 1;
    }
	temp = power(x, y / 2);
	if (y % 2 == 0){
		return temp * temp;
    }
    else{
		return x * temp * temp;
    }
}

int main()
{
    int x;
    unsigned int y;
    cout<<"Enter the number:";
    cin>>x;
    cout<<"Enter the power:";
    cin>>y;
    cout<<x<<" raised to the power "<<y<<" is ";
    cout<< power(x, y);
    return 0;
}