// #include<iostream>
// #include<vector>

// using namespace std;

// int n;
// void input(){
//     cin >> n;
// }

// void print(vector<string> x){
//     for(int i = 0; i < x.size(); i++) cout<<x[i]<<" ";
//     cout<<"\n";
    
// }

// vector<string> generateGray(int n){
//     vector<string> x;
//     if(n==0) {
//         x.push_back("0"); return x;
//     }
//     if(n==1) {
//         x.push_back("0"); 
//         x.push_back("1"); 
//         return x;
//     }

//     vector<string> y = generateGray(n-1);

//     for(int i=0; i<y.size(); i++) x.push_back("0" + y[i]); 
//     for(int i=y.size() -1 ; i>=0; i--) x.push_back("1" + y[i]);

//     return x;
// }

// void solve(){
//     vector<string> x = generateGray(n);
//     print(x);
// };

// int main(){
//     int t = 1;
//     cin >> t; 
//     while(t--){
//         input();
//         solve();
//     }
//     return 0;
// }

#include<iostream>

using namespace std;

int n; 
int a[20], b[20];

void input(){
    cin >> n;
}

void print(){
    for(int i = 1; i <= n; i++) cout<<b[i];
    cout<<" ";
}

void Try(int i){
    for(int j = 0; j <= 1; j++ ){
        a[i] = j;
        // binary => gray
        // bit 1 = nhau, bit con lai = bit hien tai xor bit truoc
        b[i] = i==1 ? a[i] : a[i]^a[i-1];
        if(i==n) print();
        else Try(i+1);
    }
}

void solve(){
    Try(1);
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