#include<bits/stdc++.h>
#include<vector>
#include<cmath>
using namespace std;
class Solution {
  public:
    int exactly3Divisors(int N) {
        int count=0;
        int limit=sqrt(N);
        vector<bool> isPrime(limit+1, true);
        isPrime[0]=isPrime[1]=false;
        for(int i=2;i<=limit;i++){
            if(isPrime[i]){
                if(i*1LL*i<=N){
                    count++;
                }
                for(int j=i*2;j<=limit;j+=i){
                    isPrime[j]=false;
                }
            }
        }
        return count;
    }
};
int main(){
    int N;
    cout<<"Enter the value of N:";
    cin>>N;
    Solution sol;
    int result=sol.exactly3Divisors(N);
    cout<<"Count of numbers with exactly 3 divisors <="<<N<<" is "<<result<<endl;
    return 0;
}