#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = N; j >=  N - i; j--){
            cout << (char)(64 + j);
        }
        cout << endl;
    }
    return 0;
}