#include<iostream>
#include <algorithm>

using namespace std;

int n,k, a[105], b[105], check = 0, result;

void input(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
}

void printArr(){
    int sum =0, count = 0;
    for(int i = 0; i < n; i++){
        sum += a[i]*b[i];
        count += b[i];
    }
    if(count == 3 && sum < k){
        result = max(sum, result);
    }
}

void Try(int i){
    int j;
    for(int j = 1; j >= 0; j--){
        b[i] = j;
        if(i==n-1) printArr();
        else Try(i+1);
    }
}

void solve(){
    result=0;
    Try(0);
    cout<<result<<"\n";
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