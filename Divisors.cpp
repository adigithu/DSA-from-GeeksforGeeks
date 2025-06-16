#include <iostream>
#include <math.h>
using namespace std;
void printDivisors(int n)
{
	for (int i=1; i<=sqrt(n); i++)
	{
		if (n%i == 0)
		{
			if (n/i == i)
				cout <<" "<< i;

			else
				cout << " "<< i << " " << n/i;
		}
	}
}
int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
	cout <<"The divisors of 100 are: \n";
	printDivisors(num);
	return 0;
}