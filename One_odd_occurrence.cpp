#include<bits/stdc++.h>
using namespace std;
int getOddOccurrence(int ar[],int ar_size)
{
	int res=0;
	for(int i=0;i<ar_size;i++){
        res=res^ar[i];
    }
	return res;
}
int main()
{
    int n,arr[100];
    cout<<"Enter the size of the array:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
	cout<<getOddOccurrence(arr, n);
	return 0;
}