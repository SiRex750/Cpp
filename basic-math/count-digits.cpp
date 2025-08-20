#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, digits;
    cin >> N;
    digits = (int)(log10(N) + 1);
    cout << digits;
    return 0;
}