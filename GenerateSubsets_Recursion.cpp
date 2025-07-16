#include<bits/stdc++.h>
using namespace std;
void powerSet(string str,int index=0,string curr="")
{
    int n=str.length();
    if(index==n) {
        cout<<curr<<endl;
        return;
    }
    powerSet(str,index+1,curr+str[index]);
    powerSet(str,index+1,curr);
}
int main()
{
    string str;
    cout<<"Enter a string:";
    cin>>str;
    cout<<"The subsets of the given string are as follows:\n";
    powerSet(str);
    return 0;
}