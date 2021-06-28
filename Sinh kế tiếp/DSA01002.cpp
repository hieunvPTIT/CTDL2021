#include<iostream>
#include <algorithm>

using namespace std;

int n,k, a[1005];

void input(){
    cin >> n >> k;
    for(int i = 1; i <= k; i++){
        cin >> a[i];
    }
}

void printArr(){
    for(int i = 1; i <= k; i++) cout<<a[i]<<" ";
    cout<<"\n";
}

void solve(){
    int i = k;
    while(i>=1 && a[i] == n-k+i) i--;
    if(i==0) for(int i = 1; i <= k; i++) a[i] = i;
    else {
        a[i]++;
        for(int j = i+1; j <= k; j++) a[j] = a[j-1] +1;
    }
    printArr();
};

int main(){
    int t = 1;
    cin >> t; 
    while(t--){
        input();
        solve();
    }
    return 0;
}