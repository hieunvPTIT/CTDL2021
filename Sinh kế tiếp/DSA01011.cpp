#include<iostream>

using namespace std;

int n, idx;
string a;

void input(){
    cin >> idx >> a;
    n = a.size();
}

void swap(int i, int j){
    int temp = a[j];
    a[j] = a[i];
    a[i] = temp;
}

void solve(){
    int k,l;
    for(k = n - 2; k >= 0; k--) if(a[k] < a[k+1]) break;
    if(k<0){ cout<<idx<<" "<<"BIGGEST"<<"\n"; return;}
    for(l = n - 1; l > k; l--) if(a[k] < a[l]) break;
    swap(k,l);
    for (int i=k+1, j=n-1; i<j; i++, j--) swap(i, j);
    cout<<idx<<" "<<a<<"\n";
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