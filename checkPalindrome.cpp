#include<iostream>
#include<string>
#include<cctype> // for tolower
using namespace std;

bool isPalindrome(string s, int i, int j) {
    if (i > j) return true;
    if (tolower(s[i]) != tolower(s[j])) return false;
    else return isPalindrome(s, i + 1, j - 1);
}

int main() {
    string s = "mom";
    cout << isPalindrome(s, 0, s.length() - 1) << endl;
    return 0;
}
