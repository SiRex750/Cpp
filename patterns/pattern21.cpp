#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++){
        if (i == 0 || i == (N - 1)){
            for (int j = 0; j < N; j++){
                cout << "*";
            }
            cout << endl;
        }
        else {
            cout << "*";
            for (int j = 0; j < N - 2; j++){
                cout << " ";
            }
            cout << "*";
            cout << endl;
        }
    }
    return 0;
}