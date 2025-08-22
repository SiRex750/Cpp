#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    /*
    for(int i = 1; i <= N; i++){
        if(N % i == 0){
            cout << i << " ";
        }
    }
    */
    vector<int> ls;
    for(int i = 1; i * i <= N; i++){
        if(N % i == 0){
            ls.push_back(i);
            if((N / i) != i){
                ls.push_back(N / i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for(auto it : ls) cout << it << " ";
    return 0;
}