#include<bits/stdc++.h>
using namespace std;

bool isPalinfrome(string &s, int i){
    if(i >= s.size()/2){
        return true;
    }
    if(s[i] != s[s.size() - 1 - i]){
        return false;
    }
    return isPalinfrome(s, i + 1);
}

int main() {
    string s;
    cin >> s; // getline(cin, s); for sentence with spaces
    if(isPalinfrome(s, 0)){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}