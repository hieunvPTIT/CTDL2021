#include<iostream>
#include<vector>

using namespace std;

int n, a[10];
vector<string> x;

void input(){
    cin >> n;
    for(int i = 0; i<n; i++) cin>>a[i];
}

void add(){
    string s = "[";
    for(int i = 0; i<n; i++) {
        s += to_string(a[i]);
        s += (i<n-1 ?" ":"");
    }
    s+="]";
    x.push_back(s);
}

void print(){
    for(int i = x.size()-1; i >= 0; i--) cout<<x[i]<<" ";
    cout<<"\n";
}

void Try(int i){
    if(i==0) return;
    add();
    for(int i = 0; i<n-1; i++) a[i] = a[i] + a[i+1];
    n--;
    Try(n);
}

void solve(){
    x.clear();
    Try(n);
    print();
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