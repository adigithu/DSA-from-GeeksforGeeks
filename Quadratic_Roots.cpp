#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        int D=b*b-4*a*c;
        if(D<0){
            return {-1};
        }
        double sqrtD=sqrt(D);
        int root1=floor((-b+sqrtD)/(2.0*a));
        int root2=floor((-b-sqrtD)/(2.0*a));
        if(root1>root2){
            return {root1,root2};
        }
        else{
            return {root2,root1};
        }
    }
};
int main(){
    int a,b,c;
    cout<<"Enter the value of a,b and c:";
    cin>>a>>b>>c;
    Solution sol;
    vector<int> roots=sol.quadraticRoots(a,b,c);
    if(roots.size()==1 && roots[0]==-1){
        cout<<"Roots are imaginary"<<endl;
    }
    else{
        cout<<"Roots: "<<roots[0]<<" "<<roots[1]<<endl;
    }
    return 0;
}