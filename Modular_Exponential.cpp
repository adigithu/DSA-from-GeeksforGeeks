#include<bits/stdc++.h>
using namespace std;
int modpower(int x, int n, int m) 
{
    if(n==0)
        return 1%m; 
    long long u=modpower(x,n/2,m);  
    u=(u*u)%m;
    if(n%2==1)
        u=(u*x)%m;
    return u;
}
int main()
{
    int x,n,m;
    cout<<"Enter the value of x:";
    cin>>x;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"Enter the value of m:";
    cin>>m;
    cout<<"The value after modular exponential is ";
    cout<<modpower(x,n,m)<<endl;
    return 0;
}