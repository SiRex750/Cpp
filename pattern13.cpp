#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, x = 1;
    cin >> N;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= i; j++){
            cout << x << " ";
            x++;
        }
        cout << endl;
    }
}