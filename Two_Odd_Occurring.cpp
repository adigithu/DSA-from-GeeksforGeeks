#include <iostream>
using namespace std;
void oddAppearing(int arr[], int n) {
    int xors=0;
    int res1=0,res2=0;
    for(int i=0;i<n;i++) {
        xors=xors^arr[i];
    }
    int sn=xors & ~(xors-1);
    for(int i=0;i<n;i++){
        if((arr[i] & sn)!=0)
            res1=res1 ^ arr[i];
        else{
            res2 = res2 ^ arr[i];
        }
    }
    cout << "The two odd occurring numbers are: " << res1 << " and " << res2 << endl;
}
int main(){
    int arr[100],n;

    cout<<"Enter the size of the array: ";
    cin>>n;

    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    oddAppearing(arr, n);
    return 0;
}
