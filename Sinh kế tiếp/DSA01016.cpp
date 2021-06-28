#include<iostream>
#include<vector>

using namespace std;

int n,k,result; 
vector<string> s;
string x;

void input(){
    cin >> n;
}

void getDevision(){
    result++;
    string tmp= "(";
    for(int i=1; i<=k; i++) tmp += to_string(x[i]) + (i==k?"": " ");
    tmp +=") ";
    s.push_back(tmp);
}

void print(){
    for(int i=0; i< s.size(); i++) cout<<s[i]<<" ";
    cout<<"\n";
}

void getNextDivision(){
    int i=k,j,R,D,S;
    while(i>0 && x[i]==1) i--;
    if(i<=0) return;
    else {
        x[i] = x[i] -1;
        D = k - i + 1;
        R = D/x[i];
        S = D%x[i];
        k=i;
        if(R>0) {
            for(j = i+1; j<=i+R; j++) x[j] = x[i];
            k+=R;
        }
        if(S>0) {k++; x[k] = S;}
        getDevision();
    } 
}

void solve(){
    k=1;
    x[1]=n;
    result=1;
    s.clear();
    s.push_back("("+to_string(n)+")");
    while(k<n) getNextDivision();
    cout<<result<<"\n";
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