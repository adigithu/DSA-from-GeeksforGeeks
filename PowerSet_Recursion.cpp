#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution{
public:
    void generatePowerSet(string s,int index,string current,vector<string>& result) {
        if(index==s.length()){
            result.push_back(current);
            return;
        }
        generatePowerSet(s,index+1,current+s[index],result);
        generatePowerSet(s,index+1,current,result);
    }
    vector<string> powerSet(string s){
        vector<string> result;
        generatePowerSet(s,0,"",result);
        return result;
    }
};
int main() {
    string input;
    cout<<"Enter a string: ";
    cin>>input;
    Solution obj;
    vector<string> result=obj.powerSet(input);
    cout<<"Power set:\n";
    for(const string& subset : result){
        cout<<"\""<<subset<<"\" ";
    }
    cout<<endl;
    return 0;
}