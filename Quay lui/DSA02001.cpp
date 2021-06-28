#include<iostream>

using namespace std;

int n, a[10];

void input(){
    cin >> n;
    for(int i = 0; i<n; i++) cin>>a[i];
}

void print(){
    cout<<"[";
    for(int i = 0; i<n; i++) cout<<a[i]<<( i<n-1 ?" ":"");
    cout<<"]\n";
}

void Try(int i){
    if(i==0) return;
    print();
    for(int i = 0; i<n-1; i++) a[i] = a[i] + a[i+1];
    n--;
    Try(n);
}

void solve(){
    Try(n);
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