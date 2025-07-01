#include <bits/stdc++.h>
using namespace std;
int checkBit(int pattern,int arr[],int n)
{
    int count=0;
    for (int i=0;i<n;i++)
        if ((pattern & arr[i])==pattern)
            count++;
    return count;
}
int maxAND(int arr[],int n)
{
    int res=0,count;
    for (int bit=31;bit>=0;bit--){
        count=checkBit(res | (1 << bit),arr,n);
        if(count>=2){
            res=res | (1 << bit);
        }
    }
    return res;
}
int main()
{
    int arr[100],n;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"The elements of the array are:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Maximum AND value="<<maxAND(arr,n);
    return 0;
}