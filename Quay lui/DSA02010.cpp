#include<bits/stdc++.h>

using namespace std;

int n,k, a[25], sum = 0, check = 0;
vector<int> x;

void input(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
}

void print(){
    check = 1;
    cout<<"[";
    for(int i = 0; i< x.size(); i++) cout<<x[i]<<(i < x.size() - 1 ? " " : "");
    cout<<"]";
}

void Try(int i){
    for(int j = i; j<n; j++){
        sum+=a[j];
        x.push_back(a[j]);
        if(sum==k) print();
        if(sum<k) Try(j);
        x.pop_back();
        sum-=a[j];
    }
    
}

void solve(){
    sum=0;
    check = 0;
    x.clear();
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