#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    for(int i=0;i<2*N-1;i++){
         for(int j=0;j<2*N-1;j++){
             int top = i;
             int bottom = j;
             int right = (2*N - 2) - j;
             int left = (2*N - 2) - i;
             cout<<(N - min(min(top,bottom), min(left,right)))<<" ";
         }
         cout<<endl;
     }
    return 0;
}