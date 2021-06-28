#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

string n;
ll F[20][20] = {0};
void input(){
    cin>>n;
}

ll convertToNumber(string a){
    ll x=0;
    for(int i = 0; i < a.size(); i++) x = x*10 + (a[i] - '0');
    return x;
}

void solve(){
    ll result = 0;
    int s = n.size();
    for(int i = 1; i <= s; i++){
        for(int j = 0; j<= s - i; j++){
            result+=convertToNumber(n.substr(j, i));
        }
    }
    cout<<result<<"\n";
}

// void solve(){
//     memset(F, 0, sizeof(F));
//     ll result = 0;
//     int s = n.size();
//     n = ' ' + n;
//     for(int i = 1; i <= s; i++) {
//         F[i][1] = n[i]-'0';
//         result += F[i][1];
//         for(int j = i; j>=2; j--){
//             for(int k = i-j+1; k<=i; k++){
//                 F[i][j] = F[i][j]*10 + F[k][1];
//             }
//             result += F[i][j];
//         }
//     }
//     // for(int i = 1; i <= s; i++) {
//     //     for(int j = 1; j <= s; j++) cout<<F[i][j]<<" "; 
//     //     cout<<"\n";
//     // }
//     cout<<result<<"\n";
    
// }

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        input();
        solve();
    }
    return 0;
}