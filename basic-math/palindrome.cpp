#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int revNum = 0;
    int dup = N;
    while(N != 0){
        int ld = N % 10;
        revNum = (revNum * 10) + ld;
        N = N/10;
    }
    if (dup == revNum) cout << "true" << endl;
    else cout << "false" << endl;
    return 0;
}