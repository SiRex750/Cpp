#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    // find lowest frequency
    int low_freq = INT_MAX;
    for(auto it : mpp) {
        low_freq = min(low_freq, it.second);
    }
    // find highest frequency
    int high_freq = INT_MIN;
    for(auto it : mpp) {
        high_freq = max(high_freq, it.second);
    }
    cout << "Lowest frequency: " << low_freq << endl;
    cout << "Highest frequency: " << high_freq << endl;
}