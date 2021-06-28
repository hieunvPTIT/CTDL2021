#include<iostream>
#include <algorithm>

using namespace std;

int n, a[1005];

void input(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
}

void printArr(){
    for(int i = 1; i <= n; i++) cout<<a[i]<<" ";
    cout<<"\n";
}

void solve(){
    int i = n-1,j = n;
    while(a[i] < a[i+1]) i--;
    if(i>0) {
        while(a[i] < a[j]) j--;
        swap(a[i],a[j]);
        for(int k = i+1, l=n; k<l; k++, l--) swap(a[k],a[l]);
    } else for(int k = 1; k <= n; k++) a[k] = n-k+1;
    
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