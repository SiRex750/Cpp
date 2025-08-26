#include<bits/stdc++.h>
using namespace std;

void reverseArray(int i, int arr[], int n){
    if (i >= n / 2){
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    reverseArray(i + 1, arr, n);
}

int main() {
    int N;
    cin >> N;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    reverseArray(0, arr, N);
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    return 0;
}