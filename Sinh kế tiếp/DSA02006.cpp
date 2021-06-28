#include<iostream>
#include <algorithm>

using namespace std;

int n,k, a[15], b[15], check = 0;

void input(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
}

void printArr(){
    int sum =0;
    for(int i = 0; i < n; i++){
        sum += a[i]*b[i];
    }
    if(sum==k){
        check = 1;
        string result="[";
        for(int i = 0; i < n; i++){
            if(b[i]) result+=to_string(a[i])+ " ";
        }
        result[result.size()-1]=']';
        cout<<result<< " ";
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
    check=0;
    Try(0);
    if(!check) cout<<"-1";
    cout<<"\n";
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