#include<bits/stdc++.h>
using namespace std;
void permute(string &str,int l,int r) 
{
    if(l==r) 
    {
        cout<<str<<" "; 
        return;
    }
    else
    {
        for(int i=l;i<=r;i++) 
        {
            swap(str[l],str[i]); 
            permute(str,l+1,r); 
            swap(str[l],str[i]); 
        }
    }
}
int main(){ 
    string str;
    cout<<"Enter a string:";
    cin>>str;
    cout<<"The all possible permutations of the given string are as follows:"<<endl;
    permute(str,0,str.length()-1); 
    return 0;
}