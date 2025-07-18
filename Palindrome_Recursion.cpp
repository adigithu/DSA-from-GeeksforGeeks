#include<bits/stdc++.h>
using namespace std;
bool isPalRec(char str[],int s,int e)
{
    if(s==e){
        return true;
    }
    if(str[s]!=str[e]){
        return false;
    }
    if(s<e+1){
        return isPalRec(str,s+1,e-1);
    }
    return true;
}
bool isPalindrome(char str[])
{
    int n=strlen(str);
    if(n==0){
        return true;
    }
    return isPalRec(str,0,n-1);
}
int main()
{
    char str[100];
    cout<<"Enter the string:";
    cin>>str;
    if(isPalindrome(str)){
        cout<<"It is a palindrome string";
    }
    else{
        cout<<"Not a palindrome string";
    }
    return 0;
}