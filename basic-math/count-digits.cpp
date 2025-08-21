#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, digits;
    cin >> N;
    /*
    while(N > 0){
        N = N/10;
        digits++; 
    }
    */
    digits = (int)(log10(N) + 1);
    cout << digits;
    return 0;
}