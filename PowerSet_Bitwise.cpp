#include<iostream>
#include<string>
using namespace std;
void printPowSet(string s){
    int n=s.length();
    int pSize=(1 << n);
    for(int i=0;i<pSize;i++){
        for(int j=0;j<n;j++){
            if((i & (1<<j))!=0){
                cout<<s[j];
            }
        }
        cout<<endl;
    }
}
int main() {
    string s;
    cout<<"Enter a string:";
    cin>>s;
    cout<<"The power set of the given string is:"<<endl;
    printPowSet(s);
    return 0;
}
