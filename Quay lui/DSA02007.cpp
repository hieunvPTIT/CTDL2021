#include<iostream>
#include<algorithm>

using namespace std;

int k;
string x, result;

void input(){
    cin >> k >> x;
}

void Try(int k){
    if(k==0) return;
    for(int i = 0; i< x.size(); i++){
        for(int  j= i+1; j<x.size(); j++){
            if(x[i] < x[j]){
                swap(x[i],x[j]);
                result = max(result, x);
                Try(k-1);
                swap(x[i],x[j]);
            }
        }
    }
}

void solve(){
    result=x;
    Try(k);
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