#include<bits/stdc++.h>
using namespace std;
void SieveOfEratosthenes(int n){
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(int p=2;p*p<=n;p++){
        if(prime[p]==true){
            for(int i=p*p;i<=n;i+=p){
                prime[i]=false;
            }
        }
    }
    for(int p=2;p<=n;p++){
        if(prime[p]){
            cout<<p<<" ";
        }
    }
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Following are the prime numbers smaller than or equal to "<<n<<endl;
    SieveOfEratosthenes(n);
    return 0;
}