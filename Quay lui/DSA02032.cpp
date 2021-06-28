#include<bits/stdc++.h>

using namespace std;

int n,k, a[25], sum = 0;
vector<vector<int> > result;
vector<int> x;

void input(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
}

void print(){
    cout<<result.size()<<" ";
    for(int i = 0; i < result.size(); i++){
        cout<<"{";
        for(int j = 0; j< result[i].size(); j++) cout<<result[i][j]<<(j < result[i].size() - 1 ? " " : "");
        cout<<"} ";
    }
    cout<<"\n";
}

void Try(int i){
    for(int j = i; j<n; j++){
        sum+=a[j];
        x.push_back(a[j]);
        if(sum==k) {
            result.push_back(x);
        }
        if(sum<k) Try(j);
        x.pop_back();
        sum-=a[j];
    }
    
}

void solve(){
    sum=0;
    x.clear();
    result.clear();
    Try(0);
    if(!result.size()) cout<<"-1"<<"\n";
    else print();
    
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