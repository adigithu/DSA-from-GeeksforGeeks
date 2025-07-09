#include<bits/stdc++.h>
using namespace std;
void PrintReverseOrder(int N)
{
	if(N<=0){
		return;
	}
	else{
		cout<<N<<" ";
		PrintReverseOrder(N-1);
	}
}
int main()
{
	int N;
    cout<<"Enter a number:";
    cin>>N;
	PrintReverseOrder(N);
	return 0;
}