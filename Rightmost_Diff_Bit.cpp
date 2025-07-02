#include<iostream>
using namespace std;
int posOfRightMostDiffBit(int m,int n) {
    int xorVal=m^n;
    if(xorVal==0){
        return -1;
    }
    int pos=1;
    while((xorVal & 1)==0){
        xorVal>>=1;
        pos++;
    }
    return pos;
}
int main(){
    int m, n;
    cout<<"Enter two integers (m and n): ";
    cin>>m>>n;
    int position=posOfRightMostDiffBit(m,n);
    if(position==-1){
        cout<<"Both numbers are identical. No differing bit found."<<endl;
    }
    else{
        cout<<"The position of the rightmost different bit is "<<position<<endl;
    }
    return 0;
}
