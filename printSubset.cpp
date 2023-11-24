#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printSubset(string ans, string original){
    if(original == ""){
        cout<<ans<<" ";
        return;
    }
    char ch = original[0];
    printSubset(ans+ch,original.substr(1));
    printSubset(ans,original.substr(1));
}

int main(){
    string str = "abc";
    printSubset("",str);
    return 0;
}