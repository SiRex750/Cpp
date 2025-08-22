#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int dup = N;
    int sum = 0;
    while(N != 0){
        int ld = N % 10;
        sum = sum + (ld * ld * ld);
        N = N/10;
    }
    if (dup == sum) cout << "true" << endl;
    else cout << "false" << endl;
    return 0;
}