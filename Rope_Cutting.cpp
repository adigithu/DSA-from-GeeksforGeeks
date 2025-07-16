#include<iostream>
using namespace std;
int maxCuts(int n,int a,int b,int c)
{
	if(n==0){
        return 0;
    }
	if(n<=-1){
        return -1;
    }
	int res=max(maxCuts(n-a,a,b,c),max(maxCuts(n-b,a,b,c),maxCuts(n-c,a,b,c)));
	if(res==-1){
        return -1;
    }
	return res+1; 
}
int main(){
	int n,a,b,c;
    cout<<"Enter the length of the rope:";
    cin>>n;
    cout<<"Enter the length of first cut:";
    cin>>a;
    cout<<"Enter the length of second cut:";
    cin>>b;;
    cout<<"Enter the length of third cut:";
    cin>>c;
	cout<<"The maximum number of cuts being available is "<<maxCuts(n, a, b, c);	
	return 0;
}