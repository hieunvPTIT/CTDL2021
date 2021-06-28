#include<iostream>

using namespace std;

int n,k, a[40], b[40];

void input(){
    cin >> n >> k;
    for(int i = 1; i <= k; i++){
        cin >> a[i];
        b[i] = a[i];
    }
}

void printArr(){
    int count = 0;
    for(int i = 1; i <= k; i++){
        for(int j = 1; j <= k; j++)
            if(a[j] == b[i]) count++;
    }
    cout<< (count==k ? count : k-count)<<"\n";
}

void solve(){
    int i = k;
    while(a[i] == n - k + i) i--;
    if(i==0) cout<<k<<"\n";
    else {
        a[i]++;
        for(int j = i + 1; j <= k; j++ ) a[j] = a[j-1] + 1; 
        printArr();
    }
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